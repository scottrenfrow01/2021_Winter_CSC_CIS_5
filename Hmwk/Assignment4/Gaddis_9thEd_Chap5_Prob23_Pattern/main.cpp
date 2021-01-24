/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 21, 2021, 5:00 PM
 * Purpose:  Pattern Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   inp; //The inputted number
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>inp;
    
    //Display the outputs
    for (int x=1; x<=inp; x++) 
    {
        for (int y=1; y<=x; y++)
        {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    for (int x=inp; x>=2; x--)
    {
        for (int y=1; y<=x; y++)
        {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    cout<<"+";
    //Exit stage righ
    //Exit stage right or left!
    return 0;
}