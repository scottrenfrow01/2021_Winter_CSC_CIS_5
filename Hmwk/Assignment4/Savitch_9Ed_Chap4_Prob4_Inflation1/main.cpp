/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 21, 2021, 5:05 PM 
 * Purpose:  Inflation Rate Proble,
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPRCT=100;
//Function Prototypes
float inflate (float crPrc, float oldPr);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char  inp;     //Yes or No
    float crPrc, //The current price of the item
          oldPrc, //The year-ago pruce of the item
          infl,
          difrnc, //The difference in price
          inflRt; //The rate of inflation as a percent
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do
    {   cout<<"Enter current price:"<<endl;
        cin>>crPrc;
        cout<<"Enter year-ago price:"<<endl;
        cin>>oldPrc;
        inflRt=inflate(crPrc, oldPrc);
        cout<<"Inflation rate: "<<showpoint<<setprecision(2)<<fixed<<inflRt<<"%"<<endl;
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
{   float difrnc,
          infl;
    difrnc=crPrc-oldPrc;
    infl=(difrnc/oldPrc)*CNVPRCT;
    return infl;
    
}