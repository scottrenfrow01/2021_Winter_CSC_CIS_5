/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 21, 2021, 4:59 PM
 * Purpose:  Minimum and Maximum Number Problem
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
    int smallNmr, //The smallest number
        lrgNmr, //The largest number
        inp; //The inputted numbers
    
    //Initialize or input i.e. set variable values
    cin>>inp;
    smallNmr=lrgNmr=inp;
    
    //Map inputs -> outputs
    while (inp!=-99) {
        if (inp<smallNmr)
        smallNmr=inp;
        if (inp>lrgNmr)
        lrgNmr=inp;
        cin>>inp;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<smallNmr<<endl;
    cout<<"Largest  number in the series is "<<lrgNmr;

    //Exit stage right or left!
    return 0;
}