/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 8:36 PM
 * Purpose:  Gross pay problem
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
    
    //Declare Variables
    int payRt, //Hourly pay rate in dollars
        payRt2, //Double pay rate in dollars
        nmrHrs, //Number of hours worked
        addHrs;// The additional number of hours worked after 40 hours has been reahced
    float  grsPay; //Gross pay
           
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRt;
    cin>>nmrHrs;
    
    //Map inputs -> outputs
    grsPay=payRt*nmrHrs;
    
    if(nmrHrs>40) {
        addHrs=nmrHrs-40;
        payRt2=2*payRt;
        grsPay=(payRt*nmrHrs)+(payRt2*addHrs)-(payRt*addHrs);
    
        
    }
    
    //Display the outputs
    cout<<"Paycheck = $"<<setw(7)<<setprecision(2)<<showpoint<<fixed<<grsPay;

    //Exit stage right or left!
    return 0;
}