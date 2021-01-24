/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 21, 2021, 12:27 PM
 * Purpose:  Positive Integer Sum Problem
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
    int  nmr, //The inputted number
         sum=0; //The calculated sum of the current number
         
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>nmr;
    
    //Display the outputs
for (int count=1;count<=nmr;count++)
{
    sum+=count;
}
    
cout<<"Sum = "<<sum;
    //Exit stage right or left!
    return 0;
}