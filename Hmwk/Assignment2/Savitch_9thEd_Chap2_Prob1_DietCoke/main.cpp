/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592; //Lbs to Grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float massMs=35,      //Mass of the mouse 35 Grams
          massKms=5,      //Mass to kill the mouse of sweetner 
          mssCoke=350,   //Mass of 1 can of Diet mss coke 
          cncnt8=0.001f, //weight of the dieter
          wDietr;       //Weight of the dieter
    int nCans; //Number of cans of diet coke
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wDietr;
    
    //Map inputs -> outputs
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt8);
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans<<" cans";

    //Exit stage right or left!
    return 0;
}