/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on February 2, 2021, 1:01 PM
 * Purpose:  Roll 6 Random Die multiple times and count the frequency of each #
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
                  die1, //The value of die 1
                  die2, //The value of die 2
                  die3, //The value of die 3
                  die4, //The value of die 4
                  die5, //The value of die 5
                  die6, //The value of die 6
                  sum; //The sum of all 6 die
    unsigned int nLoop, //The number of Loops
                 count;
    unsigned int nRoll6, //The number of times a 6 was rolled
                 nRoll7,
                 nRoll8,
                 nRoll9,
                 nRoll10,
                 nRoll11,
                 nRoll12,
                 nRoll13,
                 nRoll14,
                 nRoll15,
                 nRoll16,
                 nRoll17,
                 nRoll18,
                 nRoll19,
                 nRoll20,
                 nRoll21,
                 nRoll22,
                 nRoll23,
                 nRoll24,
                 nRoll25,
                 nRoll26,
                 nRoll27,
                 nRoll28,
                 nRoll29,
                 nRoll30,
                 nRoll31,
                 nRoll32,
                 nRoll33,
                 nRoll34,
                 nRoll35,
                 nRoll36;
            
    
    //Initialize Variables
    min=max=(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+
            (rand()%6+1);
    nLoop=10000;
    count=0;
    nRoll6=nRoll7=nRoll8=nRoll9=nRoll10=nRoll11=0;
    nRoll12=nRoll13=nRoll14=nRoll15=nRoll16=0;
    nRoll17=nRoll18=nRoll19=nRoll20=nRoll21=0;
    nRoll22=nRoll23=nRoll24=nRoll25=nRoll26=0;
    nRoll27=nRoll28=nRoll29=nRoll30=nRoll31=0;
    nRoll32=nRoll33=nRoll34=nRoll35=nRoll36=nRoll36=0;
    
    //Map Inputs to Outputs -> Process
    for(int thrw=1;thrw<=nLoop;thrw++){
        die1=(rand()%6+1);
        die2=(rand()%6+1);
        die3=(rand()%6+1);
        die4=(rand()%6+1);
        die5=(rand()%6+1);
        die6=(rand()%6+1);
        sum=die1+die2+die3+die4+die5+die6;
 
        if(min>sum)min=sum;
        if(max<sum)max=sum;
        count++;
        switch(sum)
        {
            case 6: nRoll6++;break;
            case 7: nRoll7++;break;
            case 8: nRoll8++;break;
            case 9: nRoll9++;break;
            case 10: nRoll10++;break;
            case 11: nRoll11++;break;
            case 12: nRoll12++;break;
            case 13: nRoll13++;break;
            case 14: nRoll14++;break;
            case 15: nRoll15++;break;
            case 16: nRoll16++;break;
            case 17: nRoll17++;break;
            case 18: nRoll18++;break;
            case 19: nRoll19++;break;
            case 20: nRoll20++;break;
            case 21: nRoll21++;break;
            case 22: nRoll22++;break;
            case 23: nRoll23++;break;
            case 24: nRoll24++;break;
            case 25: nRoll25++;break;
            case 26: nRoll26++;break;
            case 27: nRoll27++;break;
            case 28: nRoll28++;break;
            case 29: nRoll29++;break;
            case 30: nRoll30++;break;
            case 31: nRoll31++;break;
            case 32: nRoll32++;break;
            case 33: nRoll33++;break;
            case 34: nRoll34++;break;
            case 35: nRoll35++;break;
            case 36: nRoll36++;break;
            default:
                cout<<"You Don't Know What is Happening"<<endl;
            
        }
    }
    
    //Display Inputs/Outputs
    cout<<"The Maximum Value Thrown = "<<static_cast<int>(max)<<endl;
    cout<<"The Minimum Value Thrown = "<<static_cast<int>(min)<<endl;
    cout<<"The Frequency of Rolling a 6 = "<<nRoll6<<endl;
    cout<<"The Frequency of Rolling a 7 = "<<nRoll7<<endl;
    cout<<"The Frequency of Rolling a 8 = "<<nRoll8<<endl;
    cout<<"The Frequency of Rolling a 9 = "<<nRoll9<<endl;
    cout<<"The Frequency of Rolling a 10 = "<<nRoll10<<endl;
    cout<<"The Frequency of Rolling a 11 = "<<nRoll11<<endl;
    cout<<"The Frequency of Rolling a 12 = "<<nRoll12<<endl;
    cout<<"The Frequency of Rolling a 13 = "<<nRoll13<<endl;
    cout<<"The Frequency of Rolling a 14 = "<<nRoll14<<endl;
    cout<<"The Frequency of Rolling a 15 = "<<nRoll15<<endl;
    cout<<"The Frequency of Rolling a 16 = "<<nRoll16<<endl;
    cout<<"The Frequency of Rolling a 17 = "<<nRoll17<<endl;
    cout<<"The Frequency of Rolling a 18 = "<<nRoll18<<endl;
    cout<<"The Frequency of Rolling a 19 = "<<nRoll19<<endl;
    cout<<"The Frequency of Rolling a 20 = "<<nRoll20<<endl;
    cout<<"The Frequency of Rolling a 21 = "<<nRoll21<<endl;
    cout<<"The Frequency of Rolling a 22 = "<<nRoll22<<endl;
    cout<<"The Frequency of Rolling a 23 = "<<nRoll23<<endl;
    cout<<"The Frequency of Rolling a 24 = "<<nRoll24<<endl;
    cout<<"The Frequency of Rolling a 25 = "<<nRoll25<<endl;
    cout<<"The Frequency of Rolling a 26 = "<<nRoll26<<endl;
    cout<<"The Frequency of Rolling a 27 = "<<nRoll27<<endl;
    cout<<"The Frequency of Rolling a 28 = "<<nRoll28<<endl;
    cout<<"The Frequency of Rolling a 29 = "<<nRoll29<<endl;
    cout<<"The Frequency of Rolling a 30 = "<<nRoll30<<endl;
    cout<<"The Frequency of Rolling a 31 = "<<nRoll31<<endl;
    cout<<"The Frequency of Rolling a 32 = "<<nRoll32<<endl;
    cout<<"The Frequency of Rolling a 33 = "<<nRoll33<<endl;
    cout<<"The Frequency of Rolling a 34 = "<<nRoll34<<endl;
    cout<<"The Frequency of Rolling a 35 = "<<nRoll35<<endl;
    cout<<"The Frequency of Rolling a 36 = "<<nRoll36<<endl;
    cout<<"Sum of Frequencies = "<<nRoll6+nRoll7+nRoll8+nRoll9+nRoll10+nRoll11+
            nRoll12+nRoll13+nRoll14+nRoll15+nRoll16+nRoll17+nRoll18+nRoll19+
            nRoll20+nRoll21+nRoll22+nRoll23+nRoll24+nRoll25+nRoll26+nRoll27+
            nRoll28+nRoll29+nRoll30+nRoll31+nRoll32+nRoll33+nRoll34+nRoll35+
            nRoll36;
    
    
    
    //Exit the Program - Cleanup
    return 0;
}