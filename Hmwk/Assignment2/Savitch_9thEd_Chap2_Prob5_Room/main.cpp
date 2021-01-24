/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 7:35 PM
 * Purpose:  Fire room capacity problem
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
    int rmCpcty, //The maximum room capacity
        nmPpl, //The number of people in the room
        addPpl, //The additional number of people that can be added to the meeting
        lessPpl; //The number of people who need to be removed from the meeting
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>rmCpcty;
    cin>>nmPpl;
    
    //Map inputs -> outputs
    addPpl=rmCpcty-nmPpl;
    lessPpl=nmPpl-rmCpcty;
    
    if(nmPpl<=300) {
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<addPpl<<" will be allowed without violation.";
    }
    
    //Display the outputs
    if (nmPpl>=300) {
    cout<<"Meeting cannot be held."<<endl;
    cout<<"Reduce number of people by "<<lessPpl<<" to avoid fire violation.";
    }

    //Exit stage right or left!
    return 0;
}