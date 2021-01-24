/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 6:50 PM
 * Purpose:  Trigonometry Problem
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //manipulation library
#include <cmath> //math library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);
const float CNVRAD=PI/180;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   inpAng; //The inputted angle in degrees
    float radian; //The angle in radians
    
    //Initialize or input i.e. set variable values
          cout<<"Calculate trig functions"<<endl;
          cout<<"Input the angle in degrees."<<endl;
          cin>>inpAng;
          
    
    
    //Map inputs -> outputs
         radian=inpAng*CNVRAD;
    
    //Display the outputs
          cout<<setprecision(4)<<fixed<<showpoint;
          cout<<"sin("<<inpAng<<") = "<<sin(radian)<<endl;
          cout<<"cos("<<inpAng<<") = "<<cos(radian)<<endl;
          cout<<"tan("<<inpAng<<") = "<<tan(radian);

    //Exit stage right or left!
    return 0;
}