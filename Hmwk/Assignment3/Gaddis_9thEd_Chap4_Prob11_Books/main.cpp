/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 7:49 PM
 * Purpose:  Books Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    int inp, //The inputted number of books purchased
        nmrPnt; //The number points earned
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>inp;
    cout<<"Books purchased ="<<setw(3)<<inp<<endl;
    
    //Determine the number of books purchased
    if (inp>=4) {
        nmrPnt=60;
        cout<<"Points earned   = 60";
    }
    else 
    {
        if (inp=3) {
            nmrPnt=30;
            cout<<"Points earned   = 30";
        }
        else 
        {
            if (inp=2) {
                nmrPnt=15;
                cout<<"Points earned   = 15";
            }
            else 
            {
                if (inp=1) {
                    nmrPnt=5;
                    cout<<"Points earned   = 5";
                }
                else
                {
                    if (inp=0) {
                        nmrPnt=0;
                        cout<<"Points earned   = 0";
                    }
                
                }
            }
        }
    }
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}