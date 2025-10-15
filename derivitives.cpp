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
void checkEquation(char array[], const int SIZE) {

};

void powerRule(string);
void chainRule(string);
void constantRule(string);

int main ()

{
    const int SIZE = 50;
    char equation[SIZE];
    //string trig[];
    //int numbers[];
    cout << "Please enter a power rule d/dx:" << endl;
    cin.getline(equation, SIZE);

    cout << equation << endl;


}
