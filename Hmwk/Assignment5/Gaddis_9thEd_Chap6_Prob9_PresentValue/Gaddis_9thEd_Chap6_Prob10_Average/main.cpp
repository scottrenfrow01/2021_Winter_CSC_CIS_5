/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 26, 2021, 3:15 PM
 * Purpose:  Average test score problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int inp1, inp2, inp3, inp4, inp5;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(inp1,inp2,inp3,inp4,inp5);
    calcAvg(inp1,inp2,inp3,inp4,inp5);
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

void getScre(int &inp1,int &inp2,int &inp3,int &inp4,int &inp5)
{
    cout<<"Input the 5 test scores."<<endl;
    cin>>inp1;
    cin>>inp2;
    cin>>inp3;
    cin>>inp4;
    cin>>inp5;
    
    while (inp1<0 || inp1>100)
    {
        cout<<"Invalid test score!"<<endl;
    }
}

float calcAvg(int inp1,int inp2,int inp3,int inp4,int inp5)
{
    float avg = (inp1+inp2+inp3+inp4+inp5)-fndLwst(inp1,inp2,inp3,inp4,inp5);
    avg/=4.0f;
    cout<<"The average test score = "<<setprecision(1)<<fixed<<avg;
}

int fndLwst(int inp1,int inp2,int inp3,int inp4,int inp5) 
{
    if (inp1<inp2 && inp1<inp3 && inp1<inp4 && inp1<inp5)
    {
        return inp1;
    }if (inp2<inp1 && inp2<inp3 && inp2<inp4 && inp2<inp5)
    {
        return inp2;
    }if (inp3<inp2 && inp3<inp1 && inp3<inp4 && inp3<inp5)
    {
        return inp3;
    }if (inp4<inp2 && inp4<inp3 && inp4<inp1 && inp4<inp5)
    {
        return inp4;
    }if (inp5<inp2 && inp5<inp3 && inp5<inp4 && inp5<inp1)
    {
        return inp5;
    }
}