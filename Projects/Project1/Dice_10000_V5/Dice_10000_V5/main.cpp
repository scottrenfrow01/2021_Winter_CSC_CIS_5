/*
 * 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on February 2, 2021, 6:57 PM
 * Purpose:  Start making the game
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
#include <iomanip>   //Allows  for organization
#include <cmath>     //Math Library
#include <string>    //String Library
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
    float        points, //The accumulated number of points
                 add;   //The added number of points for just one round
    bool         again; //Allows the user to decide if they would like to play
    string       strPnts;
            
    
    //Initialize Variables
    min=max=(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+
            (rand()%6+1);
    nLoop=1;
    strPnts="points";
    
    //Output the Menu
    cout<<"This program simulates a game of 10000"<<endl;
    cout<<"If you would like to play input '1' or '0' if you do";
    cout<<" not wish to play."<<endl<<endl;
    cin>>again;
    
        //Map Inputs to Outputs -> Process
    while(again!=0){
        points=0;
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
                
                if(min>sum)min=sum;
                if(max<sum)max=sum;

                
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
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
                    cout<<"Added number of points from rolling a three of a kind";
                        cout<<" = "<<add<<"   Total number of ";
                        cout<<"points = "<<points<<endl;
                    }
                }

                //The points added if a four of a kind is rolled
                if (die1==die2 && die2==die3 && die3==die4){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die5){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die6){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die4 && die4==die5){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind ";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die4 && die4==die6){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind ";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die5 && die5==die6){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die4 && die4==die5){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die4 && die4==die6){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die5 && die5==die6){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die4 && die4==die5 && die5==die6){
                    add=(die1*200.0f);
                    points=points+(die1*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die4 && die4==die5){
                    add=(die2*200.0f);
                    points=points+(die2*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die4 && die4==die6){
                    add=(die2*200.0f);
                    points=points+(die2*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die5 && die5==die6){
                    add=(die2*200.0f);
                    points=points+(die2*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die4 && die4==die5 && die5==die6){
                    add=(die2*200.0f);
                    points=points+(die2*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die3==die4 && die4==die5 && die5==die6){
                    add=(die3*200.0f);
                    points=points+(die3*200.0f);
                    cout<<"Added number of points from rolling a four of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }    

                //The points added if a five of a kind is rolled
                if (die1==die2 && die2==die3 && die3==die4 && die4==die5){
                    add=(die1*400.0f);
                    points=points+(die1*400.0f);
                    cout<<"Added number of points from rolling a five of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die4 && die4==die6){
                    add=(die1*400.0f);
                    points=points+(die1*400.0f);
                    cout<<"Added number of points from rolling a five of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die3 && die3==die5 && die5==die6){
                    add=(die1*400.0f);
                    points=points+(die1*400.0f);
                    cout<<"Added number of points from rolling a five of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die2 && die2==die4 && die4==die5 && die5==die6){
                    add=(die1*400.0f);
                    points=points+(die1*400.0f);
                    cout<<"Added number of points from rolling a five of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die1==die3 && die3==die4 && die4==die5 && die5==die6){
                    add=(die1*400.0f);
                    points=points+(die1*400.0f);
                    cout<<"Added number of points from rolling a five of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
                if (die2==die3 && die3==die4 && die4==die5 && die5==die6){
                    add=(die1*400.0f);
                    points=points+(die2*400.0f);
                    cout<<"Added number of points from rolling a five of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }

                //The points added if a six of a kind is rolled
                if (die1==die2&&die2==die3&&die3==die4&&die4==die5&&die5==die6){
                    add=(die1*800.0f);
                    points=points+(die1*800.0f);
                    cout<<"Added number of points from rolling a six of a kind";
                        cout<<" = "<<add<<"    Total number of ";
                        cout<<"points = "<<points<<endl;
                }
            count++;
            }
        }while (points<10000); //Continue this loop until 10000 points is reached
       
        cout<<"If you would like to play input '1' or '0' if you do";
    cout<<" not wish to play again."<<endl<<endl;
    cin>>again;
    
    }
    
    cout<<static_cast<int>(die1)<<endl;
    cout<<static_cast<int>(die2)<<endl;
    cout<<static_cast<int>(die3)<<endl;
    cout<<static_cast<int>(die4)<<endl;
    cout<<static_cast<int>(die5)<<endl;
    cout<<static_cast<int>(die6)<<endl;
   
    
    
    
    //Display Inputs/Outputs
    
    
    
    //Exit the Program - Cleanup
    return 0;
}