/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 23, 2021, 6:19 PM
 * Purpose:  Car's Miles Per Gallon Problem Version 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVGLLN=.264179f; //The conversion from liters to gallons

//Function Prototypes
float mpgCnv1 (float galGas1, float ltrGas1, float mpg1, int miles1);
float mpgCnv2 (float galGas2, float ltrGas2, float mpg2, int miles2);
int fuelEco (float mpg1, float mpg2);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float     ltrGas1,
              galGas1,
              mpg1,
              ltrGas2,
              galGas2,
              mpg2;
    int       miles1,
              miles2;
    char      inp;    //The inputted yes or no to continue
    
    //Initialize or input i.e. set variable values
    do
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>ltrGas1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        mpg1=mpgCnv1(galGas1, ltrGas1, mpg1, miles1);
        cout<<"miles per gallon: "<<showpoint<<setprecision(2)<<fixed<<mpg1<<endl;
        cout<<endl;
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>ltrGas2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        mpg2=mpgCnv2(galGas2, ltrGas2, mpg2, miles2);
        cout<<"miles per gallon: "<<showpoint<<setprecision(2)<<fixed<<mpg2<<endl;
        cout<<endl;
        fuelEco (mpg1, mpg2);
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
int fuelEco (float mpg1, float mpg2)
{
    if (mpg1>mpg2)
    {
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }if (mpg1<mpg2)
    {
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
}

float mpgCnv1 (float galGas1, float ltrGas1, float mpg1, int miles1)
{
    galGas1=ltrGas1*CNVGLLN;
    mpg1=miles1/galGas1;
   
    return mpg1;
   
}    
float mpgCnv2 (float galGas2, float ltrGas2, float mpg2, int miles2)
{
    galGas2=ltrGas2*CNVGLLN;
    mpg2=miles2/galGas2;
    
    return mpg2;
}