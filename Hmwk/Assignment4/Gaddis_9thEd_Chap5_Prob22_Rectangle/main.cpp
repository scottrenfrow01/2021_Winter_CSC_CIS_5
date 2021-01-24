/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 22, 2021, 7:26 PM
 * Purpose:  Rectangle pattern problem
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
    unsigned int   inpSz; //The inputted size of the Rectangle
    char           inpLtr; //The inputted letter which makes the rectangle 
    
    //Initialize or input i.e. set variable values
    cin>>inpSz;
    cin>>inpLtr;
    
    //Map inputs -> outputs
    for (int x=1; x<inpSz; x++)
    {
        for (int y=1; y<inpSz; y++)
        {
            cout<<inpLtr;
        }
        cout<<inpLtr<<endl;
    }
    for (int z=1; z<inpSz+1; z++)
    {
        cout<<inpLtr;
    }
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}