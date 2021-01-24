/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 21, 2021, 4:59 PM
 * Purpose:  P
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int  nmrDays, //The number of days worked
                  payRt=1, //The amount of money the person earns each day
                  dayPay=2,
                  penny; //The total amount of money earned
    
    //Initialize or input i.e. set variable values
            cin>>nmrDays;
            
    //Map inputs -> outputs
    while(nmrDays<1)
    {
        cout<<"Number of days Inputted is Invalid."<<endl;
        cout<<"Please Input integer greater than or equal to one.";
        cin>>nmrDays;
    }
    for (int i=0;i<nmrDays;i++)
    {
        penny+=payRt;
        payRt=payRt*dayPay;
    }
    cout<<"Pay = $"<<penny/100<<".";
    if((payRt%100)<10) {
        cout<<"0"<<penny%100;
    }
    else if((penny%100)>=10)
    {
        cout<<penny%100;
    }
    
    //Display the outputs
        
    //Exit stage right or left!
    return 0;
}