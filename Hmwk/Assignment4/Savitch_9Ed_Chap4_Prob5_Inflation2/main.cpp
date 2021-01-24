/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 21, 2021, 5:05 PM 
 * Purpose:  Inflation Rate Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float CNVPRCT=100;

//Function Prototypes
float predict (float oldPrc, float inflRt);
float inflate(float crPrc, float oldPrc);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float crPrc, //The current price in dollars
          oldPrc, //The old price in dollars
          infl,
          inflRt; //The inflation rate as a percentage
    char  inp; //The inputted choice "y" or "n" 
        
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do
    {   cout<<"Enter current price:"<<endl;
        cin>>crPrc;
        cout<<"Enter year-ago price:"<<endl;
        cin>>oldPrc;
        inflRt=inflate(crPrc,oldPrc);
        cout<<fixed;
        cout<<"Inflation rate: "<<setprecision(2)<<inflRt<<"%"<<endl;
        cout<<endl;
        oldPrc=crPrc;
        oldPrc=predict(oldPrc,inflRt);
        cout<<"Price in one year: $"<<oldPrc<<endl;
        oldPrc=predict(oldPrc,inflRt);
        cout<<"Price in two year: $"<<oldPrc<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            cout<<endl;
        }
    } while (inp=='y');

    //Exit stage right or left!
    return 0;
}

float inflate (float crPrc, float oldPrc)
{
    float diff,
          infl;
    diff=crPrc-oldPrc;
    infl=(diff/oldPrc)*CNVPRCT;
    return infl;
    
}
float predict (float oldPrc, float inflRt) 
{
    inflRt=inflRt/CNVPRCT;
    oldPrc=oldPrc+(oldPrc*inflRt);
   return 0;
}
