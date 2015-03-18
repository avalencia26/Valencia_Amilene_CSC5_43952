/* 
 * File:   main.cpp
 * Author: Amilene Valencia
 * Created on March 17, 2015, 5:06 PM
 *  Purpose: Box Office Problem
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
    //Declare Variables:
    float adTkt, chTkt, adSold, chSold, grssProf, pctKeep, netProf, p2dist;
    short nadTkt, nchTkt;
    const int SIZE = 31;
    char mvNme[SIZE];
    adTkt=6.00;
    chTkt=3.00;
    pctKeep=0.20;
    //Input Values:
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This program will calculate the theater's "
            "income for ticket sales."<<endl;
    cout<<"What was the name of the movie? (maximum of 30 characters)"<<endl;
    cin.getline(mvNme, SIZE);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>nadTkt;//Number of adult tickets sold
    cout<<"How many child tickets were sold?"<<endl;
    cin>>nchTkt;//Number of child tickets sold
    adSold=adTkt*nadTkt;//Total profit for adult tickets
    chSold=chTkt*nchTkt;//Total profit for child tickets
    grssProf=adSold+chSold;//Gross profit
    netProf=grssProf*pctKeep;//Net profit
    p2dist=grssProf-netProf;//Paid to distributor
    cout<<"Movie Name: "<<mvNme<<endl;
    cout<<setw(20)<<"Adult Tickets Sold: "<<nadTkt<<endl;
    cout<<setw(20)<<"Child Tickets Sold: "<<nchTkt<<endl;
    cout<<setw(20)<<"Gross Box Office Profit: $"<<grssProf<<endl;
    cout<<setw(20)<<"Net Box Office Profit: $"<<netProf<<endl;
    cout<<setw(20)<<"Amount paid to distributor: $"<<p2dist<<endl;
    
    return 0;
}

