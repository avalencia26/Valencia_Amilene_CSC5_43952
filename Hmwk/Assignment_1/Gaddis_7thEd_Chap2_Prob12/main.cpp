/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 9, 2015, 12:36 AM
 *      Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare Variables
    float acre, pcofLnd;
    //Known Values
    acre=43560;//Square feet
    pcofLnd=389767/acre;
    //Output:
    cout<<"There are "<<pcofLnd
            <<" acres in a 389,767 square foot tract of land"<<endl;
    return 0;
}

