#include <iostream>
#include "mat.cpp"
#include <string>
using namespace std;
int main() {
    string str = ariel::mat(9, 7, '@', '-');
    cout << str << endl;
    string str2 = ariel::mat(3, 5, '$', '#');
    cout << str2 << endl;
    string str5 = ariel::mat(1, 1, '@', '-');
    cout << str5 << endl;
    string str6 = ariel::mat(5, 5, ' ', '-');
    cout << str6 << endl;
    string str1 = ariel::mat(2, 7, '@', '-');
    cout << str1 << endl;
    string str3 = ariel::mat(-1, 5, '+', '*');
    cout << str3 << endl;
    string str4= ariel::mat(7, 3, 'E', '*');
    cout << str4 << endl;
    string str7= ariel::mat(11, 7, '6', '*');
    cout << str7 << endl;
    string str8= ariel::mat(11, 0, '6', '*');
    cout << str8 << endl;
    string str9= ariel::mat(5, 7, '&', '&');
    cout << str9 << endl;
    string str10= ariel::mat(3, -5, '^', '*');
    cout << str10 << endl;
    string str11= ariel::mat(4, 4, '%', '*');
    cout << str11 << endl;
    string str12= ariel::mat(0, 0, '%', '*');
    cout << str12 << endl;
    string str13= ariel::mat(3, 3, '%', '*');
    cout << str13 << endl;
    return 0;
}
