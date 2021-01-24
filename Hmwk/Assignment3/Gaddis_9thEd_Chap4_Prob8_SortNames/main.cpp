/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 10:22 AM
 * Purpose:  Alphabetical order name problem
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string inp1, //The first inputted name 
           inp2, //The second inputted name
           inp3; //The third inputted name
    
    //Initialize or input i.e. set variable values
        cout<<"Sorting Names"<<endl;
        cout<<"Input 3 names"<<endl;
        cin>>inp1>>inp2>>inp3;
    
    //Map inputs -> outputs
    
    //Display the outputs
        if (inp1>inp2 && inp2>inp3) {
            cout<<inp3<<endl;
            cout<<inp2<<endl;
            cout<<inp1;
        } else if (inp1>inp3 && inp3>inp2) {
            cout<<inp2<<endl;
            cout<<inp3<<endl;
            cout<<inp1;
        } else if (inp3>inp2 && inp2>inp1) {
            cout<<inp1<<endl;
            cout<<inp2<<endl;
            cout<<inp3;
        } else if (inp3>inp1 && inp1>inp2) {
            cout<<inp2<<endl;
            cout<<inp1<<endl;
            cout<<inp3;
        } else if (inp2>inp1 && inp1>inp3) {
            cout<<inp3<<endl;
            cout<<inp1<<endl;
            cout<<inp2;
        } else if (inp2>inp3 && inp3>inp1) {
            cout<<inp1<<endl;
            cout<<inp3<<endl;
            cout<<inp2;
        }
    

    //Exit stage right or left!
    return 0;
}