/* 
 * File:   main.cpp
 * Author: Alonso Rojas
 *
 * Created on March 2, 2015, 9:08 AM
 *      Purpose: Free fall problem from Savitch
 */
//System Libraries
#include <iostream>
using namespace std;

// User Libraries
  
//Global Constants
const float G=3.2174e1f;//Acceleration in feet/sec^2 on earth or gravity
const float CNVFTME=3.048e-1f;//Conversion from feet to meters

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=1/2*G*time*time;//DOES NOT WORK
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2.of*G*time*time;
    //dstnce=G*1/2*time*time;
    //dstnce=0.5f*G*time*time;
    dstnce=0.5f*G*time*time;
    //Output the results
    cout<<"Distance fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce*CNVFTME<<"(meters)"<<endl;
    //Exit stage Right 
    return 0;
}

