/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 23, 2015, 10:08 AM
 *      Purpose: Minimum/Maximum Problem
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short x, y;
    //Input variables
    cout<<"This program will determine which of the two\n"
            "numbers is the larger and which one is the smaller.\n";
    cout<<"Input the first number: "<<endl;
    cin>>x;
    cout<<"Input the second number: "<<endl;
    cin>>y;
    
    if (x>y){
        cout<<"_________________________"<<endl;
        cout<<x<<" is the larger number."<<endl;
        cout<<y<<" is the smaller number."<<endl;
    }
    else {
        cout<<"_________________________"<<endl;
        cout<<y<<" is the larger number. "<<endl;
        cout<<x<<" is the smaller number."<<endl;
    }

 return 0;
}

