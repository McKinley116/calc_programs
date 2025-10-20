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

// Function declarations
void breakdown(string equation, vector<string> words, vector<int> constants); // this function breaks down a string equation into seperate parts to determine what operations to use
int determineOperation( vector<string> words, string equation);
int determineConstants(vector<string> words, string equation, vector<int> constants);


// Classes


int main() {

    string equation;
    string word;
    vector<string> words;
    vector<int> constants;

    cout << "Enter an equation:";
    cin.clear();
   getline(cin, equation);
    stringstream ss(equation);


    while (ss >> word) {
        words.push_back(word);

    }

   cout << "This is your equation:" << endl;

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " " ;
    }

    return 0;
}

void breakdown(string equation, vector<string> words, vector<int> constants) {
    //First determine where each char or integer goes
    //second sends them into their respective vectors
}

int determineConstants(string equation, int a, int b) {
    // this function determines what constats are in an equation and the stores them into its own vector for computation

    for (int i = 0; i < equation.size(); i++) {

    }
}


int determineOperation( vector<string> words, string equation, int a, int b) {
    // this functions loops through a users equation and determines the operation to use to calculate an answer
    int answer = 0;
        for (int i = 0; i < words.size(); i++) {
            for ( int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == '+') {
                    //answer = addition(a,b);
                } else if (words[i][j] == '-') {
                    //answer = subtraction(a, b);
                } else if (words[i][j] == '*') {
                    //answer = multiplication(a,b);
                } else if (words[i][j] == '/') {
                    //answer = division(a,b);
                } else (cout << "error" << endl);
            }
        }

    return answer;

    }



/*
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
string trig_derive( vector<string>, vector<string> );
int const_derive(int a);
string powerRule(int a, int x);
string productRule();
string quotientRule();


int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}
 */
