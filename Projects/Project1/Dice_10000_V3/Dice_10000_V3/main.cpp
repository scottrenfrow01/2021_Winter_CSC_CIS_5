/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on February 2, 2021, 1:01 PM
 * Purpose:  Roll a Random Die multiple times and count the frequency of each #
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
    unsigned int nLoop, //The number of Loops
                 nRoll1, //The number of times a 1 was rolled
                 nRoll2, //The number of times a 2 was rolled
                 nRoll3, //The number of times a 3 was rolled
                 nRoll4, //The number of times a 4 was rolled
                 nRoll5, //The number of times a 5 was rolled
                 nRoll6; //The number of times a 6 was rolled
    
    //Initialize Variables
    min=max=rand()%6+1;
    nLoop=10000;
    
    //Map Inputs to Outputs -> Process
    for(int thrw=1;thrw<=nLoop;thrw++){
        die=rand()%6+1;//[1,6]
        cout<<"Throw = "<<thrw<<" Die Value = "<<static_cast<int>(die)<<endl;
        if(min>die)min=die;
        if(max<die)max=die;
        switch(die)
        {
            case 1: nRoll1++;break;
            case 2: nRoll2++;break;
            case 3: nRoll3++;break;
            case 4: nRoll4++;break;
            case 5: nRoll5++;break;
            case 6: nRoll6++;break;
        }
    }
    
    //Display Inputs/Outputs
    cout<<"The Maximum Value Thrown = "<<static_cast<int>(max)<<endl;
    cout<<"The Minimum Value Thrown = "<<static_cast<int>(min)<<endl;
    cout<<"The Frequency of Rolling a 1 = "<<nRoll1<<endl;
    cout<<"The Frequency of Rolling a 2 = "<<nRoll2<<endl;
    cout<<"The Frequency of Rolling a 3 = "<<nRoll3<<endl;
    cout<<"The Frequency of Rolling a 4 = "<<nRoll4<<endl;
    cout<<"The Frequency of Rolling a 5 = "<<nRoll5<<endl;
    cout<<"The Frequency of Rolling a 6 = "<<nRoll6<<endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}


