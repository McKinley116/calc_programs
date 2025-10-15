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
#include <vector>

using namespace std;

//Functions
int addition(int a, int b) {
    return a + b;
};
int subtraction(int a, int b) {
    return a - b;
};
int multiplication(int a, int b) {
    return a * b;
};
int division(int a, int b) {
    return a / b;
};
string trig_derive();
int const_derive();
string powerRule();
string productRule();
string quotientRule();

int main ()

{
    int a, b;

}
