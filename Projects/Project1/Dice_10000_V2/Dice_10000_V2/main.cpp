/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on February 2, 2021, 1:01 PM
 * Purpose:  Roll a Random Die 10000 Times and Find the Minimum and Maximum
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char min, //The minimum value
                  max, //The maximum value
                  die;
    unsigned int nLoop; //The number of Loops
    
    //Initialize Variables
    min=max=rand()%6+1;
    nLoop=10000;
    
    //Map Inputs to Outputs -> Process
    for(int thrw=1;thrw<=nLoop;thrw++){
        die=rand()%6+1;//[1,6]
        cout<<"Throw = "<<thrw<<" Die Value = "<<static_cast<int>(die)<<endl;
        if(min>die)min=die;
        if(max<die)max=die;
    }
    
    //Display Inputs/Outputs
    cout<<"The Maximum Value Thrown = "<<static_cast<int>(max)<<endl;
    cout<<"The Minimum Value Thrown = "<<static_cast<int>(min)<<endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}

