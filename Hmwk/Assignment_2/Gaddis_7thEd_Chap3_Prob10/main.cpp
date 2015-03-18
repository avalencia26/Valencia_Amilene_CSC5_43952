/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 17, 2015, 8:06 PM
 * Purpose: Celsius to Farenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare variables
    float F, C;
    //Input
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"This program converts Celsius temperatures to "
            "Fahrenheit temperatures"<<endl;
    cout<<"Input the Celsius Temperature"<<endl;
    cin>> C; //Celsius
    //Calculate
    F=9/static_cast<float>(5)*C+32; //Fahrenheit
    //Output Variables
    cout<<C<<" degrees Celsius converts to "<<F<<" degrees Fahrenheit"<<endl;
    return 0;
}

