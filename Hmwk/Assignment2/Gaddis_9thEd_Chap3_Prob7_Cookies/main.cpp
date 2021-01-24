/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 5:56 PM
 * Purpose:  Cookie Calorie Problem
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
    int bagSz, // The number of cookies the bag can hold
        servBg, //The number of servings in a bag
        servCal, //The number of  calories in a servings
        bagCal, //The total number of calories in the bag
        inp, //The inputed number of cookies eaten
        ttlCal; //The total number of calories consumed
    
    //Initialize or input i.e. set variable values
        bagSz=40;
        servBg=10;
        servCal=300;
        cout<<"Calorie Counter"<<endl;
        cout<<"How many cookies did you eat?"<<endl;
        cin>>inp;
    
    //Map inputs -> outputs
    bagCal=servCal*servBg;
    ttlCal=(bagCal*inp)/(bagSz);
    
    //Display the outputs
    cout<<"You consumed "<<ttlCal<<" calories.";

    //Exit stage right or left!
    return 0;
}