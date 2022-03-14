//
// Created by User on 06/03/2022.
//
#include <string>
using namespace std;
#include "mat.hpp"
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>


namespace ariel{
    string mat(int col, int row,char a, char b ){
        const int min =33;
        const int max =126;
        if(col%2==0 || row%2==0){
            throw std::invalid_argument("Mat size is always odd");}
        if(col<=0 || row<=0){
            throw std::invalid_argument("row and col cannot be zero or negative");}
        if (a < min || a > max || b < min || b > max ){
            throw std::invalid_argument("insert valid char!");}

        vector<vector<char>> vec(row, vector<char>(col ) );

        int temp =0;
        int r = row;
        int c =col;
        double two = 2;
        int num_frame = ceil(row/two);
        int k = 0; // frames even
        int j = 1; //frames odd
        while(temp<num_frame){
            if (row<=0 or col<=0){
                break;}
            if(temp%2==0){ //if the frame even
                for (int i = k; i < col; ++i) {
                    vec[k][i] = a; //fill first row
                    vec[row - 1][i] = a; //fill last row
                }
                for (int i = k; i < row; ++i) {
                    vec[i][k]=a; //fill first col
                    vec[i][col - 1]=a;//fill last col
                }
                k+=2;
            }
            else{ //if the frame odd
                for (int i = j; i < col; ++i) {
                    vec[j][i] = b; //fill first row
                    vec[row - 1][i] = b; //fill last row
                }
                for (int i = j; i < row; ++i) {
                    vec[i][j]=b; //fill first col
                    vec[i][col - 1]=b;//fill last col
                }
                j+=2;
            }
            temp++;
            row--;
            col--;
        }
        string str;
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                str+=vec[i][j];
            }
            str+='\n' ;
        }
        return str;
    }


}

