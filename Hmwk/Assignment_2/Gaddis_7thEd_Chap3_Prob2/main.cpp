/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 16, 2015, 10:20 AM
 * Purpose: Stadium Seating
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
    cout<<fixed<<setprecision(2)<<showpoint;
    //Declare Variables
    char ClassA, ClassB, ClassC;
    float nClassA, nClassB, nClassC, tIncme;
    
    ClassA=15; //Class A ticket value
    ClassB=12; //Class B ticket value
    ClassC=9; //Class C ticket value
   //Input the variables
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>nClassA;
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>nClassB;
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>nClassC;
    cout<<"You sold "<<nClassA<<" Class A tickets at $15/ticket"<<endl;
    cout<<"Class A tickets income: $"<<ClassA*nClassA<<endl;
    cout<<"You sold "<<nClassB<<" Class B tickets at $12/ticket"<<endl;
    cout<<"Class B tickets income: $"<<ClassB*nClassB<<endl;
    cout<<"You sold "<<nClassC<<" Class C tickets at $9/ticket"<<endl;
    cout<<"Class C tickets income: $"<<ClassC*nClassC<<endl;
    tIncme=(ClassA*nClassA)+(ClassB*nClassB)+(ClassC*nClassC);
    cout<<"You generated a total of $"<<tIncme<<" in ticket sales"<<endl;
    return 0;
}

