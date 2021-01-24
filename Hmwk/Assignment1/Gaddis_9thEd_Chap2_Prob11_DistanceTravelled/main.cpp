/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 8, 2021, 10:42 AM
 * Purpose:  Distance Travelled Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float capcty, //The car's fuel capacity in gallons
          ctyMpg, //The car's MPG in the city 
          hwyMpg, //The car's MPG in the highway
          ctyDist, //The distance the car can travel in the city in miles
          hwyDist; //The distance the car can travel on the highway in miles
            
    //Initialize Variables
          capcty=20;
          ctyMpg=23.5;
          hwyMpg=28.9;
                  
    //Map Inputs to Outputs -> Process
                  ctyDist=capcty*ctyMpg;
                  hwyDist=capcty*hwyMpg;
                  
    //Display Inputs/Outputs
             cout<<"The car travels "<<ctyDist<<" miles in the city"<<endl;
             cout<<"The car travels "<<hwyDist<<" miles on the highweay"<<endl;
                  
    //Exit the Program - Cleanup
    return 0;
}