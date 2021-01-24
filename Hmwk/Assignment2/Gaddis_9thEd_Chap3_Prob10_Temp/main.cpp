/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 6:33 PM
 * Purpose:  Celsius to Farenheit Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float celsius, //The inputted temperature in degrees celsius
          frnhet, //The temperature in degrees Fahrenheit
          frzTemp, //The temperature at which water freezes in Fahrenheit
          cnv; //conversion equation
    
    //Initialize or input i.e. set variable values
    frzTemp=32;
    cnv=.555555;
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>frnhet;
    
    //Map inputs -> outputs
    celsius=(frnhet-frzTemp)*cnv;
    
    //Display the outputs
    cout<<setprecision(1)<<showpoint<<fixed<<frnhet<<" Degrees Fahrenheit = "<<setprecision(1)<<showpoint<<fixed<<celsius<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}