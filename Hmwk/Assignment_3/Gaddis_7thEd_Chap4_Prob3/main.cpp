/* 
 * File:   main.cpp
 * Author: rcc
 *Created on March 25, 2015, 10:31 AM
 * Purpose: Magic Dates
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    short month, day, year;
    //Input variables
    cout<<"Enter a month in numeric form"<<endl;
    cin>>month;
    cout<<"Enter a day"<<endl;
    cin>>day;
    cout<<"Enter a two-digit year (i.e. 1960 is 60)"<<endl;
    cin>>year;
   
    year=month*day?
        cout<<"The date is magic!\n":cout<<"The date is not magic.\n";
    
    return 0;
}

