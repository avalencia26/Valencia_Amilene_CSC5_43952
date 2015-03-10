/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 9, 2015, 4:53 PM
 *  Purpose: Distance per Tank of Gas
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare variables:
    float carTnk, tMPG, hMPG, hDstnce, tDstnce;
    
    //Known Values
    carTnk=20;
    tMPG=21.5;
    hMPG=26.8;
    
    //Calculate Values:
    hDstnce=carTnk*hMPG;
    tDstnce=carTnk*tMPG;
    
    //Output variables
    cout<<"A car with a 20 gallon gas tank will travel:"<<endl;
    cout<<hDstnce<<" miles on the highway on one tank of gas"<<endl;
    cout<<tDstnce<<" miles in town on one tank of gas"<<endl;
    
    return 0;
}

