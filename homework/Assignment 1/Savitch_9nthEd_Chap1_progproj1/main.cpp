/* 
 * File:   main.cpp
 * Author: Alonso Rojas
 *
 * Created on March 6, 2015, 1:40 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int numpods , pppod, totalp ;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number:\n";
    
    cin>> numpods ;
    
    cout << "Enter another number to add to the previous number:\n";
    cin >> pppod;
    totalp = numpods+pppod;
    cout << "If you have ";
    cout << numpods;
    cout << " and ";
    cout << pppod;
    cout << " you have ";
    cout << totalp;
    cout << " total number.\n";
    cout << " this is the end of the program.\n";
            
    
    
    
    

    return 0;
}

