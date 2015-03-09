/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 *Created on March 9, 2015, 4:14 PM
 *  Purpose: Miles per Gallon problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare variables:
    float MPG, mlsDrvn, galsGas;
    
    //Known values:
    galsGas=12;
    mlsDrvn=350;
    
    //Calculate
    MPG=mlsDrvn/galsGas;
    
    //Output:
    cout<<"A car that holds 12 gallons of gas and can travel 350 miles before"
            <<" refueling can average "<<MPG<<" miles per gallon."<<endl;
    return 0;
}

