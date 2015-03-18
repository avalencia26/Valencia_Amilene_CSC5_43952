/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 17, 2015, 7:39 PM
 *  Purpose: How Many Widgets?
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
    float widgets, wtPallt, wtPwWid, nWidgts;
    widgets=9.2;
    //Input Values
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"This program will calculate the number of widgets on a pallet."<<endl;
    cout<<"What is the weight of the pallet without the widgets in lbs?"<<endl;
    cin>>wtPallt; //Weight of the pallet without the widgets
    cout<<"What is the weight of the pallet with the widgets in lbs?"<<endl;
    cin>>wtPwWid;//Weight of the pallet with widgets
    //Calculate
    nWidgts=(wtPwWid-wtPallt)/static_cast<float>(widgets);
    //Output values:
    cout<<"There are "<<nWidgts<<" widgets on the pallet."<<endl;
    return 0;
}

