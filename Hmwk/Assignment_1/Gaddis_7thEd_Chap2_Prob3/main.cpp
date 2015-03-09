/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 8, 2015, 11:15 PM
 * Purpose: Gaddis Sales Tax Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char prchse, stteTx, cntyTx, ttlTx;
    //Known Values
    prchse=52; //Purchase of $52
    stteTx=4;//State Tax Percentage
    cntyTx=2;//County Tax Percentage
    //Calculate tax
    ttlTx=prchse*stteTx/static_cast<float>(CNVPCT)+0.5+
            (prchse*cntyTx/static_cast<float>(CNVPCT))+0.5;//Total Sales Tax
    
    cout<<"The total sales tax for a purchase of $52 is:"<<" $"
            <<static_cast<short>(ttlTx)<<endl;
    
    return 0;
}

