/*
 * 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on February 3, 2021, 9:02 PM
 * Purpose:  Final Touch-ups
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time to set the seed
#include <iomanip>   //Allows  for organization
#include <cmath>     //Math Library
#include <string>    //String Library
#include <fstream>   //File I/O
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
                  sum, //The sum of all 6 die
                  die; //The dice value for the output file
    unsigned int  nLoop, //The number of Loops
                  count,
                  nRoll6,nRoll7,nRoll8,nRoll9,nRoll10,nRoll11,nRoll12,nRoll13,
                  nRoll14,nRoll15,nRoll16,nRoll17,nRoll18,nRoll19,nRoll20,
                  nRoll21,nRoll22,nRoll23,nRoll24,nRoll25,nRoll26,nRoll27,
                  nRoll28,nRoll29,nRoll30,nRoll31,nRoll32,nRoll33,nRoll34,
                  nRoll35,nRoll36; //The frequencies of rolling each sum
    float         points, //The accumulated number of points
                  add;   //The added number of points for just one round
    bool          again; //Allows the user to decide if they would like to play
    string        strPnts;
    fstream       inp;
    string        fn="points.dat";
    const int     NDICE=6; //The number of dice
    string        number1="1",//The rolled number
                  number2="2",
                  number3="3",
                  number4="4",
                  number5="5",
                  number6="6";
    fstream       out;
    string        fileNm;

            
    
    //Initialize file parameters
    fileNm="die.dat";
    out.open(fileNm,ios::out);
    
    cout<<right;
    for(unsigned char die=0;die<NDICE;die++){
        string strDie;
        strDie=rand()%6+1;
    }
    
    //Initialize Variables
    min=max=(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+
            (rand()%6+1);
    nLoop=1;
    nRoll6=nRoll7=nRoll8=nRoll9=nRoll10=nRoll11=0;
    nRoll12=nRoll13=nRoll14=nRoll15=nRoll16=0;
    nRoll17=nRoll18=nRoll19=nRoll20=nRoll21=0;
    nRoll22=nRoll23=nRoll24=nRoll25=nRoll26=0;
    nRoll27=nRoll28=nRoll29=nRoll30=nRoll31=0;
    nRoll32=nRoll33=nRoll34=nRoll35=nRoll36=nRoll36=0;
    strPnts="points";
    
    //Output the Menu
    cout<<"This program simulates a game of 10000"<<endl;
    cout<<"If you would like to play input '1' or '0' if you do";
    cout<<" not wish to play."<<endl<<endl;
    cin>>again;
    
        //Map Inputs to Outputs -> Process
        //Continue Looping until the user would like to stop
    while(again!=0){
        inp.open(fn,ios::in);
        points=0;
        inp>>points; //Read in the number of points at the start of each round
        count=0;
        do{
            
            for(int thrw=1;thrw<=nLoop;thrw++){
                die1=(rand()%6+1); //The value for die 1
                die2=(rand()%6+1); //The value for die 2
                die3=(rand()%6+1); //The value for die 3
                die4=(rand()%6+1); //The value for die 4
                die5=(rand()%6+1); //The value for die 5
                die6=(rand()%6+1); //The value for die 6
                sum=die1+die2+die3+die4+die5+die6; //The sum of all the sides
                
                //Determine the minimum and maximum values
                min>sum? min=sum: min=min;
                max<sum? max=sum: max=max;

                //Display the frequencies of the numbers thrown
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
                
                //Start adding points
                //Points added if a one is rolled
                if (die1==1){
                    add=pow(10,2);
                    points+=100.0f;
                    cout<<"Added number of points from rolling a one =";
                    cout<<setw(4)<<add<<"               Total number of ";
                    cout<<strPnts<<" = "<<points<<endl;
                }
                if (die2==1){
                    add=pow(10,2);
                    points+=100.0f;
                    cout<<"Added number of points from rolling a one =";
                    cout<<setw(4)<<add<<"               Total number of ";
                    cout<<strPnts<<" = "<<points<<endl;
                }
                if (die3==1){
                    add=pow(10,2);
                    points+=100.0f;
                    cout<<"Added number of points from rolling a one =";
                    cout<<setw(4)<<add<<"               Total number of ";
                    cout<<strPnts<<" = "<<points<<endl;
                }
                if (die4==1){
                    add=pow(10,2);
                    points+=100.0f;
                    cout<<"Added number of points from rolling a one =";
                    cout<<setw(4)<<add<<"               Total number of ";
                    cout<<strPnts<<" = "<<points<<endl;
                }
                if (die5==1){
                    add=pow(10,2);
                    points+=100.0f;
                    cout<<"Added number of points from rolling a one =";
                    cout<<setw(4)<<add<<"               Total number of ";
                    cout<<strPnts<<" = "<<points<<endl;
                }
                if (die6==1){
                    add=pow(10,2);
                    points+=100.0f;
                    cout<<"Added number of points from rolling a one =";
                    cout<<setw(4)<<add<<"               Total number of ";
                    cout<<strPnts<<" = "<<points<<endl;
                }

                //Points added if a 5 is rolled
                else if (die1==5){
                    add=50.0f;
                    points+=50.0f;
                    cout<<"Added number of points from rolling a five = ";
                    cout<<add<<"               Total number of ";
                    cout<<"points = "<<points<<endl;
                }
                else if (die2==5){
                    add=50.0f;
                    points+=50.0f;
                    cout<<"Added number of points from rolling a five = ";
                    cout<<add<<"               Total number of ";
                    cout<<"points = "<<points<<endl;
                }
                else if (die3==5){
                    add=50.0f;
                    points+=50.0f;
                    cout<<"Added number of points from rolling a five = ";
                    cout<<add<<"               Total number of ";
                    cout<<"points = "<<points<<endl;
                }
                else if (die4==5){
                    add=50.0f;
                    points+=50.0f;
                    cout<<"Added number of points from rolling a five = ";
                    cout<<add<<"               Total number of ";
                    cout<<"points = "<<points<<endl;
                }
                else if (die5==5){
                    add=50.0f;
                    points+=50.0f;
                    cout<<"Added number of points from rolling a five = ";
                    cout<<add<<"               Total number of ";
                    cout<<"points = "<<points<<endl;
                }
                else if (die6==5){
                    add=50.0f;
                    points+=50.0f;
                    cout<<"Added number of points from rolling a five = ";
                    cout<<add<<"               Total number of ";
                    cout<<"points = "<<points<<endl;
                }

                //Points added if a 3 of a kind is rolled
                if (die1==die2 && die2==die3)
                {
                    if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                    add=(die1*100.0f);
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a three";
                    cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
               if (die1==die2 && die2==die4)
                {
                   if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                       add=(die1*100.0f);
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a";
                    cout<<" three of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }

                }
                if (die1==die2 && die2==die5)
                {
                    if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die1*100.0f);
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a three of a";
                        cout<<" kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die1==die2 && die2==6)
                {
                    if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die1*100.0f);
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die1==die3 && die3==die4)
                {
                    if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die1*100.0f);
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die1==die3 && die3==die5)
                {
                    if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die1*100.0f);
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die1==die3 && die3==die6)
                {
                    if (die1==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                    points=points+(die1*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die2==die3 && die3==die4)
                {
                    if (die2==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die2*100.0f);
                    points=points+(die2*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die2==die3 && die3==die5)
                {
                    if (die2==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die2*100.0f);
                    points=points+(die2*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die2==die3 && die3==die6)
                {
                    if (die2==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die2*100.0f);
                    points=points+(die2*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die2==die4 && die4==die5)
                {
                    if (die2==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die2*100.0f);
                    points=points+(die2*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die2==die4 && die4==die6)
                {
                    if (die2==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die2*100.0f);
                    points=points+(die2*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die3==die4 && die4==die5)
                {
                    if (die3==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die3*100.0f);
                    points=points+(die3*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die3==die4 && die4==die6)
                {
                    if (die3==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die3*100.0f);
                    points=points+(die3*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }
                if (die3==die5 && die5==die6)
                {
                    if (die3==1)
                    {
                        add=1000.0f;
                        points+=1000.0f;
                        cout<<"Added number of points from rolling three ones";
                        cout<<" = "<<add<<"         Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                    else{
                        add=(die3*100.0f);
                    points=points+(die3*100.0f);
                    cout<<"Added number of points from rolling a three";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }

                //The points added if a four of a kind is rolled
                if (die1==die2 && die2==die3 && die3==die4){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die5){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die6){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die4 && die4==die5){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind ";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die4 && die4==die6){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind ";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die5 && die5==die6){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die4 && die4==die5){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die4 && die4==die6){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die5 && die5==die6){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die4 && die4==die5 && die5==die6){
                    add=(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die4 && die4==die5){
                    add=(die2*200.0f)-(die2*100.0f);
                    points=points+(die2*200.0f)-(die2*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die4 && die4==die6){
                    add=(die2*200.0f)-(die2*100.0f);
                    points=points+(die2*200.0f)-(die2*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die5 && die5==die6){
                    add=(die2*200.0f)-(die2*100.0f);
                    points=points+(die2*200.0f)-(die2*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die4 && die4==die5 && die5==die6){
                    add=(die2*200.0f)-(die2*100.0f);
                    points=points+(die2*200.0f)-(die2*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die3==die4 && die4==die5 && die5==die6){
                    add=(die3*200.0f)-(die3*100.0f);
                    points=points+(die3*200.0f)-(die3*100.0f);
                    cout<<"Added number of points from rolling a four";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }    

                //The points added if a five of a kind is rolled
                if (die1==die2 && die2==die3 && die3==die4 && die4==die5){
                    add=(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a five";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die4 && die4==die6){
                    add=(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a five";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die5 && die5==die6){
                    add=(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a five";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die4 && die4==die5 && die5==die6){
                    add=(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a five";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die4 && die4==die5 && die5==die6){
                    add=(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    cout<<"Added number of points from rolling a five";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die4 && die4==die5 && die5==die6){
                    add=(die2*400.0f)-(die2*200.0f)-(die2*100.0f);
                    points=points+(die2*400.0f)-(die2*200.0f)-(die2*100.0f);
                    cout<<"Added number of points from rolling a five";
                        cout<<" of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }

                //The points added if a six of a kind is rolled
                if (die1==die2&&die2==die3&&die3==die4&&die4==die5&&die5==die6){
                    add=(die1*800.0f)-(die1*400.0f)-(die1*200.0f)-(die1*100.0f);
                    points=points+(die1*800.0f)-(die1*400.0f)-(die1*200.0f);
                    points=points-(die1*200.0f);
                    cout<<"Added number of points from rolling a six of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
            count++;
            }
            
        }while (points<10000); //Continue this loop until 10000 points 
       
        //Output "You Won!" and frequencies
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
        cout<<endl<<"You Won!"<<endl;
        
        //Ask the user if they would like to play again
        cout<<"If you would like to play again input '1' or '0' if you do";
        cout<<" not wish to play again."<<endl<<endl;
        cin>>again;
    
    }
    //Exit the Program - Cleanup
    inp.close();
    out.close();
    return 0;
}