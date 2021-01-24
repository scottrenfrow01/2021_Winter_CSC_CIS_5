/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 7, 2021, 1:18 PM
 * Purpose:  East Coast Sales Problem
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
    unsigned int pctSls, //East Coast's Percent of Total Sales
                 ttlSls, //Company's Total Sales
                 eTtlSls; //East Coast's Total Sales
    
    //Initialize Variables
                 pctSls=58;
                 ttlSls=8600000;
    //Map Inputs to Outputs -> Process
                 eTtlSls=ttlSls*pctSls/100;
                 
    //Display Inputs/Outputs
                 cout<<"The East Coast Sales division total sales = $"
                     <<eTtlSls<<endl;
    //Exit the Program - Cleanup
    return 0;
}
