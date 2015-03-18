/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 17, 2015, 4:31 PM
 *  Purpose: Test Average Problem
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
    //Declare Variables
    float test1, test2, test3, test4, test5, average;
    //Input Values:
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"This program will calculate your average test score."<<endl;
    cout<<"Input all test scores as a percent out of 100."<<endl;
    cout<<"What was the score for Test 1?"<<endl;
    cin>>test1;
    cout<<"What was the score for Test 2?"<<endl;
    cin>>test2;
    cout<<"What was the score for Test 3?"<<endl;
    cin>>test3;
    cout<<"What was the score for Test 4?"<<endl;
    cin>>test4;
    cout<<"What was the score for Test 5?"<<endl;
    cin>>test5;
    average=(test1+test2+test3+test4+test5)/5;
    //Output the result
    cout<<"Your average test score was "<<average<<"%"<<endl;
    
    return 0;
}

