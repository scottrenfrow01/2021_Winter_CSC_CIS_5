/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 8, 2021, 4:56 PM
 * Purpose:  Land Calculation Problem
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
    float acrSze, //The size of one acre in square feet
          landSze, //The size of the land in square feet
          landAcr; //The size of the land in acres
            
    //Initialize Variables
          acrSze=43560;
          landSze=391876;
            
    //Map Inputs to Outputs -> Process
          landAcr=landSze/acrSze;
    
    //Display Inputs/Outputs
          cout<<"The tract of land which is 391,876 square feet = ";
          cout<<landAcr<<" acres."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}