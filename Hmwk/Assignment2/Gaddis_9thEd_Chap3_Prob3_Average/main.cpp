/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 5:35 PM
 * Purpose:  Average test score problem
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int inp; //Input
    float avg; //Average of all five values
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>inp;
    avg=inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    
    //Map inputs -> outputs
    avg=avg/5.0f;
    
    //Display the outputs
    cout<<"The average = "<<setprecision(2)<<showpoint<<avg;

    //Exit stage right or left!
    return 0;
}