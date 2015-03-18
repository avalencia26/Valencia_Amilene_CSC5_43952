/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 18, 2015, 10:27 AM
 * Purpose: Pizza Pi Problem; How many slices per pizza?
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float PI=3.14159;

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare variables
    float diamtr, nSlices, aSlc, aPizza, radius;
    aSlc=14.125;
    //Input values:
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"This program will calculate the number of slices "
            "that may be taken from a pizza"<<endl;
    cout<<"What is the diameter of the pizza in inches?"<<endl;
    cin>>diamtr;
    //Calculate the number of slices
    radius=diamtr/static_cast<float>(2);
    aPizza=PI*radius*radius;
    nSlices=aPizza/aSlc;
    //Output the result
    cout<<"A total of "<<nSlices<<" slices may be taken from the pizza."<<endl;   
    return 0;
}

