/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Purpose: Checking if Program 4-1 Works!
 */


//This program displays the values of true and false states.
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    bool trueValue, falseValue;
    int x = 5, y = 10;
    
    trueValue = x < y;
    falseValue = y == x;
    
    cout<< "True is "<<trueValue<<endl;
    cout<< "False is " << falseValue <<endl;
    return 0;
}

