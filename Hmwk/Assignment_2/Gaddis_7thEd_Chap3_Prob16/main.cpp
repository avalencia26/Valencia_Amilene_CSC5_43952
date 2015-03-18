/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 17, 2015, 9:07 PM
 *  Purpose: Interest Earned
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare variables
    float princpl, intRte, intrest, amtSvng;
    short  tmCmpnd;
    
    //Input values
    cout<<"This program calculates your total amount in savings on a loan"<<endl;
    cout<<"What is the interest rate(%) on your loan?"<<endl;
    cin>>intRte;
    cout<<"How many times is the interest compounded?"<<endl;
    cin>>tmCmpnd;
    cout<<"What is the principal amount? (insert the number only; no commas)"<<endl;
    cin>>princpl;
    
    //Calculate:
    amtSvng= princpl* pow((1+((intRte/static_cast<float>(100))/
            static_cast<float>(tmCmpnd))), tmCmpnd);
    intrest=amtSvng-princpl;
    
    //Output values:
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Interest Rate: "<<intRte<<"%"<<endl;
    cout<<"Times Compounded: "<<tmCmpnd<<endl;
    cout<<"Principal: $"<<princpl<<endl;
    cout<<"Interest: $"<<intrest<<endl;
    cout<<"Amount in savings: $"<<amtSvng<<endl;
    return 0;
}

