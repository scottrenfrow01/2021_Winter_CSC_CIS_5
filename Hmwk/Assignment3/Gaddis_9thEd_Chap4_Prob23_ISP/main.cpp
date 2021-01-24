/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 15, 2021, 10:04 PM
 * Purpose:  Internet Service Provider Problem
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variable
    float mnthBl; //The monthly Bill
    int   hours; //Hours used 
    char  package, //The inputted package
          hrLmt, //The hour limit 
          addHrs; //The additional number of hours after the limit has been reached
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>hours;
    
    //Map inputs -> outputs
    switch(package) {
        case 'A': 
        {
            mnthBl=9.95f;
            hrLmt=10;
            addHrs=2;
            break;
        }
        case 'B': 
        {
            mnthBl=14.95f;
            hrLmt=20;
            addHrs=1;
            break;
        }
        case'C':
        {
            mnthBl=19.95f;
            hrLmt=0;
            addHrs=0;
            break;
        }
    }
    if(hours>hrLmt)
    {
        mnthBl+=(hours-hrLmt)*addHrs;
    }
    
    
    //Display the outputs
    cout<<"Bill = $ "<<setw(5)<<showpoint<<setprecision(2)<<fixed<<mnthBl;
    
    //Exit stage right or left!
    return 0;
}