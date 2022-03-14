#include <iostream>
#include "mat.cpp"
#include <string>
using namespace std;
int main() {
    try {
        string str = ariel::mat(9, 7, '@', '-');
        cout << str << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }

    try {
        string str2 = ariel::mat(3, 5, '$', '#');
        cout << str2 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str5 = ariel::mat(1, 1, '@', '-');
        cout << str5 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str6 = ariel::mat(5, 5, ' ', '-');
        cout << str6 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str1 = ariel::mat(2, 7, '@', '-');
        cout << str1 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str3 = ariel::mat(-1, 5, '+', '*');
        cout << str3 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str4 = ariel::mat(7, 3, 'E', '*');
        cout << str4 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str7 = ariel::mat(11, 7, '6', '*');
        cout << str7 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str8 = ariel::mat(11, 0, '6', '*');
        cout << str8 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str9 = ariel::mat(5, 7, '&', '&');
        cout << str9 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str10 = ariel::mat(3, -5, '^', '*');
        cout << str10 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str11 = ariel::mat(4, 4, '%', '*');
        cout << str11 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str12 = ariel::mat(0, 0, '%', '*');
        cout << str12 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    try {
        string str13 = ariel::mat(3, 3, '%', '*');
        cout << str13 << endl;
    }
    catch (exception e){
        cout << e.what() << endl;
    }
    return 0;
}
