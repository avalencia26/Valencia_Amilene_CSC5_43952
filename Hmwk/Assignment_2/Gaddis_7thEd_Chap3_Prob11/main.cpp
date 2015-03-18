/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 18, 2015, 3:02 PM
 *  Purpose: Currency exchange rate to Japanese Yen and Euros
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float YNPDLLR=120.23;
float EURPDLR=0.92;

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare Variables
    float dollar, jpnYen, euro;
    //Input data
    cout<<"This program will convert US dollar amounts to "
            "Japanese Yen and euros"<<endl;
    cout<<"Enter the dollar amount:"<<endl;
    cin>>dollar;
    //Calculate variables;
    jpnYen=dollar*YNPDLLR;
    euro=dollar*EURPDLR;
    //Output the result
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<dollar<<" USD convert to "<<jpnYen<<" Japanese Yen."<<endl;
    cout<<dollar<<" USD convert to "<<euro<<" euro(s)."<<endl;
    return 0;
}

