/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 7, 2021, 1:46 PM
 * Purpose:  Total Sales Tax Problem
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
    unsigned int purPrc, //Purchase Price
                 ttlTax; //Total Sales Tax
    float        stTax, //State Sales Tax
                 ctyTax; //County Sales Tax
    
    //Initialize Variables
                 purPrc=95;
                 stTax=.04;
                 ctyTax=.02;
    
    
    //Map Inputs to Outputs -> Process
                 ttlTax=(purPrc*stTax+.005)+(purPrc*ctyTax+.005);
    
    //Display Inputs/Outputs
                 cout<<"The total sales tax of a $95 purchase = $"<<ttlTax<<
                 endl;
                
                 
    //Exit the Program - Cleanup
    return 0;
}
