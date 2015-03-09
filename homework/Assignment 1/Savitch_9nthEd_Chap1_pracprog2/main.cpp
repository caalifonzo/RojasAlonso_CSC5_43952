
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
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin>> numpods ;
    
    cout << "Enter the number of peas ina pod:\n";
    cin >> pppod;
    totalp = numpods*pppod;
    cout << "If you have";
    cout << numpods;
    cout << " pea pods\n";
    cout << "and ";
    cout << pppod;
    cout << "peas in each pod, then\n";
    cout << "you have ";
    cout << totalp;
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";
            
    
    
    
    

    return 0;
}


using namespace std;
