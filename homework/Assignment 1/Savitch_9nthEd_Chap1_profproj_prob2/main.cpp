/* 
 
 * File:   main.cpp
 * Author: Alonso Rojas
 *
 * Created on March 4, 2015, 8:30 AM
 *      Purpose: 2nd Homework Problem
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes
 
 //Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    char c;//Character to be used to display c
    char s;//Character to be used to display s
    char pp;//Character to be used to display !!
    char ii;//Character to be used to display 00
    //Prompt for the letter C to be user
    cout<<"type in cs!0, or whatever letters you want, to make it come out all big and stuff!!"<<endl;
    cin>>c>>s>>pp>>ii;
    //Output Big C
    cout<<"***********************************************************"<<endl;
    cout<<"   "<<c<<c<<c<<"                    "<<s<<s<<s<<s<<"    "<<pp<<endl;
    cout<<"  "<<c<<"    "<<c<<"                 "<<s<<"    "<<s<<"   "<<pp<<endl;
    cout<<" "<<c<<"       "<<"               "<<s<<"         "<<pp<<endl;
    cout<<c<<"                        "<<s<<"        "<<pp<<endl;
    cout<<c<<"                         "<<s<<s<<s<<s<<"    "<<pp<<endl;
    cout<<c<<"                             "<<s<<"   "<<pp<<endl;
    cout<<" "<<c<<"                       "<<s<<"    "<<s<<endl;
    cout<<"  "<<c<<"    "<<c<<"                  "<<s<<s<<s<<s<<"    "<<ii<<endl;                
    cout<<"   "<<c<<c<<c<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Computer Science is Cool stuff!!!!"<<endl;
    //Exit Stage Right
    return 0;
}

