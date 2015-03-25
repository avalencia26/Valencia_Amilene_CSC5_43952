/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 25, 2015, 10:00 AM
 * Purpose: Roman Numeral Converter
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution:
int main(int argc, char** argv) {
    //Declare variables
    short number;
    //Input variables
    cout<<"Input a number from one through ten"<<endl;
    cin>>number;
    
    //Output the result
    switch(number){
        case 1:{
            cout<<"The Roman Numeral for 1 is: I"<<endl;
            break;
        }
        case 2:{
            cout<<"The Roman Numeral for 2 is: II"<<endl;
            break;
        }
        case 3:{
            cout<<"The Roman Numeral for 3 is: III"<<endl;
            break;
        }
        case 4:{
            cout<<"The Roman Numeral for 4 is: IV"<<endl;
            break;
        }
        case 5:{
            cout<<"The Roman Numeral for 5 is: V"<<endl;
            break;
        }
        case 6:{
            cout<<"The Roman Numeral for 6 is: VI"<<endl;
            break;
        }
        case 7:{
            cout<<"The Roman Numeral for 7 is: VII"<<endl;
            break;
            
        } 
        case 8:{
            cout<<"The Roman Numeral for 8 is: VIII"<<endl;
            break;
            
        } 
        case 9:{
            cout<<"The Roman Numeral for 9 is: IX"<<endl;
            break;
            
        } 
        case 10:{
            cout<<"The Roman Numeral for 10 is: X"<<endl;
            break;
        }
        
        default: cout<<"You didn't input a number from 1-10!"<<endl;
    }
    return 0;
}

