/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 7, 2021, 3:00 PM
 * Purpose:  Ocean Level Problem
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
    float ocnRt, //The rate at which the ocean level rises each year
          year5, //The number of millimeters the sea has risen in 5 years
          year7, //The number of millimeters the sea has risen in 7 years
          year10; //The number of millimeters the sea has risen in 10 years
            
    //Initialize Variables
          ocnRt=1.5;
            
    //Map Inputs to Outputs -> Process
          year5=ocnRt*5;
          year7=ocnRt*7;
          year10=ocnRt*10;
          
    //Display Inputs/Outputs
          cout<<"After 5 years the ocean has risen ";
          cout<<year5<<" millimeters"<<endl;
          cout<<"After 7 years the ocean has risen ";
          cout<<year7<<" millimeters"<<endl;
          cout<<"After 10 years the ocean has risen ";
          cout<<year10<<" millimeters"<<endl;
          
    //Exit the Program - Cleanup
    return 0;
}