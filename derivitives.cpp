//
// Created by Brandon McKinley on 10/13/25.
//
//Power Rule : d/dx x^a = a*x^a-1
//Chain rule : d/dx x(ax) = a x(ax)
//Constant : d/dx C = C
// d/dx e^x = e^x
// d/dx sin x = cos x
// d/dx cos x = -sin x
// d/dx tan x = sec^2 x
// d/dx sec x = secx tanx
// d/dx csc x = -cscx cotx
// d/dx cot x = -csc x

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

//Functions
void checkEquation(string str) {
    int n = str.length();
    const char* word = "";

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ' or i == n - 1 )
            cout << word + str[i] << endl;
            word = "";
        }
    else
    {
        word += str[i];
    }
};

void powerRule(string);
void chainRule(string);
void constantRule(string);

int main ()

{
    string str;
    string equation[100];
    string trig[10];
    int numbers[10];
    cout << "Please enter a power rule d/dx:" << endl;
    getline(cin, str);
    checkEquation(str);


}
