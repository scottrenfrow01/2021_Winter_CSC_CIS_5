/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 21, 2021, 5:01 PM
 * Purpose:  Car's Miles Per Gallon Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVGLLN=.264179; //The conversion from liters to gallons

//Function Prototypes
float mpgCnv (float galGas, float ltrGas, float mpg, int miles);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float     ltrGas,
              galGas,
              mpg;
    int       miles;
    char      inp;    //The inputted yes or no to continue
    
    //Initialize or input i.e. set variable values
    do
    {
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<endl;
        cin>>ltrGas;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<endl;
        cin>>miles;
        mpg=mpgCnv(galGas, ltrGas, mpg, miles);
        cout<<"miles per gallon:"<<showpoint<<setprecision(2)<<fixed<<endl;
        cout<<mpg<<endl;
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            cout<<endl;
        }
    } while(inp=='y');
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float mpgCnv (float galGas, float ltrGas, float mpg, int miles)
{
    galGas=ltrGas*CNVGLLN;
    mpg=miles/galGas;
    return mpg;
    
}