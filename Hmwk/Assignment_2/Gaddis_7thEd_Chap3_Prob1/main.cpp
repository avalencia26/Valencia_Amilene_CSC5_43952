/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 16, 2015, 9:46 AM
 * Purpose: Miles per Gallon problem
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    cout<<fixed<<setprecision(2)<<showpoint;
    float nGllns, mFllTnk, MPG;
    cout<<"How many gallons of gas can your car hold?"<<endl;
    cin>>nGllns;
    cout<<"How many miles can your car be driven on a full tank of gas?"<<endl;
    cin>>mFllTnk;
    MPG=mFllTnk/nGllns;
    cout<<"Your car runs at:"<<MPG<<" mile(s) per gallon (MPG)"<<endl;
    return 0;
}

