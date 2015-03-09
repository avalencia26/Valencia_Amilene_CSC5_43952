/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 *Created on March 8, 2015, 6:25 AM
 *      Purpose: Total Purchase Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare Variables:
   float itmOne, itmTwo, itmThr, itmFour, itmFve,sbTtl, slsTx, amntTx, total;
    
    //Known Values:
    itmOne=1.295e1;
    itmTwo=2.495e1;
    itmThr=6.95;
    itmFour=1.495e1;
    itmFve=3.95;
    slsTx=6;
   
    //Calculate:
    sbTtl=itmOne+itmTwo+itmThr+itmFour+itmFve;
    amntTx=sbTtl*slsTx/static_cast<float>(CNVPCT);
    total=sbTtl+amntTx;
    
    //Output Variables:
    cout<<"Total Purchase Problem:"<<endl;
    cout<<"Item One = "<<"$"<<itmOne<<endl;
    cout<<"Item Two = "<<"$"<<itmTwo<<endl;
    cout<<"Item Three = "<<"$"<<itmThr<<endl;
    cout<<"Item Four = "<<"$"<<itmFour<<endl;
    cout<<"Item Five = "<<"$"<<itmFve<<endl;
    cout<<"Subtotal = "<<"$"<<sbTtl<<endl;
    cout<<"Amount of Sales Tax = "<<"$"<<amntTx<<endl;
    cout<<"Total amount = "<<"$"<<total<<endl;
    return 0;
}

