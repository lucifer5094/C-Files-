#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    double dbl;
    char ch;
    string str;
    // taking input form the user
    cout << "enter an integer : ";
    cin >> num;
    cout << "enter a double : ";
    cin >> dbl;
    cout << "enter a character : ";
    cin >> ch;
    cout << "enter a string : ";
    cin.ignore();
    getline(cin, str);

    // printing the input
    cout << "the integer is : " << num << endl;
    cout << "the double is : " << dbl << endl;
    cout << "the character is " << ch << endl;
    cout << "the string is " << str << endl;

    return 0;
}