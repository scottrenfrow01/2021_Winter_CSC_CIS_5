/* 
 * File: main.cpp  
 * Author: Scott Renfrow
 * Created on: January 25, 2021, 2:15 PM
 * Purpose:  Present Value Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float psntVal(float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float futVal,intRate,prVal;
    int nYrs;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    prVal=psntVal(futVal,nYrs,intRate);
    cout<<"The Present Value = $"<<showpoint<<setprecision(2)<<fixed<<prVal;

    //Exit stage right or left!
    return 0;
}
float psntVal(float futVal,float intRate,float nYrs)
{
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>futVal;
    cout<<"Input the Number of Years"<<endl;
    cin>>nYrs;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intRate;
    intRate=(intRate/100)+1;
    return (futVal)/(pow(intRate,nYrs));
}