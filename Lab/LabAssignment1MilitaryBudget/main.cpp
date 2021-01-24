/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 1:08 PM
 * Purpose:  Lab Assignment 1 - Budget/Percentage
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
    float milBdgt, //Military Budget in dollars
          fedBdgt, //Federal Budget in dollars
          mlPrcnt; //The military budget as a percentage of the federal budget
            
    //Initialize Variables
          milBdgt=7.0e11f;
          fedBdgt=4.1e12f;
    
    //Map Inputs to Outputs -> Process
          mlPrcnt=(milBdgt/fedBdgt)*100;
                  
    //Display Inputs/Outputs
          cout<<"The military budget = "<<mlPrcnt;
          cout<<"% of the federal budget"<<endl;
          
    //Exit the Program - Cleanup
    return 0;
}
