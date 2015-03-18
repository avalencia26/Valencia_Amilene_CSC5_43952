/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 18, 2015, 3:28 PM
 *  Purpose: Automobile Costs
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
    float lonPmnt, insrnce, gas, oil, tires, mntnce, mthCst, annCst;
    //Input variables
    cout<<"This program will calculate the total monthly and annual "
            "cost of your automobile\n"<<"Do not insert commas."<<endl;
    cout<<"What is your loan payment amount?"<<endl;
    cin>>lonPmnt;//Loan payment
    cout<<"What is your insurance payment per month?"<<endl;
    cin>>insrnce;//Insurance payment
    cout<<"How much do you spend on gas per month?"<<endl;
    cin>>gas;//Gas amount
    cout<<"How much do you spend on oil per month?"<<endl;
    cin>>oil;//Oil amount
    cout<<"How much do you spend on tires per month?"<<endl;
    cin>>tires;//Tire amount
    cout<<"How much do you spend on maintenance per month?"<<endl;
    cin>>mntnce;//Maintenance
    //Calculate variables
    mthCst=lonPmnt+insrnce+gas+oil+tires+mntnce;
    annCst=mthCst*12;
    //Output variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"____________________"<<endl;
    cout<<"Your automobile's monthly cost is: $"<<mthCst<<endl;
    cout<<"Your automobile's annual cost is $"<<annCst<<endl;
    
    return 0;
}

