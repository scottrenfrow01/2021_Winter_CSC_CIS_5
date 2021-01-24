/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 7:34 PM
 * Purpose:  Number sum problem
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
    int posSum=0, //The sum of all the positive numbers
        negSum=0, //The sum of all the negative numbers
        ttlSum=0, //The total sum of all the numbers
        inp; //Input Values
    
    //Initialize or input i.e. set variable values
        cout<<"Input 10 numbers, any order, positive or negative"<<endl;
        for(int i = 0; i<10; i++)
        {
            
        
            cin>>inp;
        
        //Map inputs -> outputs
         if (inp<0) {
                negSum+=inp;
                ttlSum+=inp;    
                
            }
            
       else if (inp>0) {
               posSum+=inp;
               ttlSum+=inp;
                
                
            }
        }
        cout<<"Negative sum ="<<right<<setw(4)<<negSum<<endl;
        cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
        cout<<"Total sum    ="<<setw(4)<<ttlSum;
    
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}