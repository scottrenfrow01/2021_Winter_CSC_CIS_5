/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 6:23 PM
 * Purpose:  Property insurance problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float insPct, //The minimum percent of a home values that each property should be insured up to 
          rplCst, //The replacement cost of a building
          insAmt; //The minimum insurance coverage for the inputted building
          
    //Initialize or input i.e. set variable values
          cout<<"Insurance Calculator"<<endl;
          insPct=.8;
          cout<<"How much is your house worth?"<<endl;
          cin>>rplCst;
          
    //Map inputs -> outputs
          insAmt=insPct*rplCst;
          
    //Display the outputs
    cout<<"You need $"<<insAmt<<" of insurance.";

    //Exit stage right or left!
    return 0;
}