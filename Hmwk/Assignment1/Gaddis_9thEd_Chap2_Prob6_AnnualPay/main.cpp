/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 7, 2021, 2:49 PM
 * Purpose:  Annual Pay Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned int payAmt, //Amount of money the employee gets paid each period
                 payPrd, //The number of times the employee gets paid each year
                 anlPay; //The amount of money the employee earns each year
            
    //Initialize Variables
                 payAmt=2200;
                 payPrd=26;
                 
    
    //Map Inputs to Outputs -> Process
                 anlPay=payAmt*payPrd;
    //Display Inputs/Outputs
                 cout<<"The employee makes $";
                 cout<<anlPay<<" each year"<<endl;
    //Exit the Program - Cleanup
    return 0;
}