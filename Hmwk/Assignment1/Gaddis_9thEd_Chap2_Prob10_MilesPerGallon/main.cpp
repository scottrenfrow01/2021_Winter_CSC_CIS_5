/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
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
    unsigned int tnkSize, //Amount of fuel the car can hold in gallons
                 dist, //Distance the car can travel on a full tank in miles
                 mpg; //Miles per gallon
            
    //Initialize Variables
                 tnkSize=15;
                 dist=375;
    
    //Map Inputs to Outputs -> Process
                 mpg=dist/tnkSize;
    //Display Inputs/Outputs
                 cout<<"The car's MPG = "<<mpg<<endl;
    //Exit the Program - Cleanup
    return 0;
}