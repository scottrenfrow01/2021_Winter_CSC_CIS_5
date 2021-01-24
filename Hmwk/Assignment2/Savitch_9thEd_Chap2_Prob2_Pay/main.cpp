/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 7:55 PM
 * Purpose:  Workers pay problem
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Manipulation library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   prvPay; //The employee's previous annual pay in dollars
    float payInc, //The percent increase in pay given to the employee
          payDue, //The amount of retroactive pay given to the employee in dollars
          newAnl, //The new annual pay check given to the employee in dollars
          newMnt, //The new monthly pay check given to the employee in dollars
          addPay; //The total amount of money increased to the employee in dollars
    
    //Initialize or input i.e. set variable values
          payInc=.076;
          cout<<"Input previous annual salary."<<endl;
          cin>>prvPay;
    
    //Map inputs -> outputs
    addPay=prvPay*payInc;
    payDue=(prvPay*payInc)/2;
    newAnl=prvPay+addPay;
    newMnt=newAnl/12;
    
    //Display the outputs
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<payDue<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newAnl<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMnt;

    //Exit stage right or left!
    return 0;
}