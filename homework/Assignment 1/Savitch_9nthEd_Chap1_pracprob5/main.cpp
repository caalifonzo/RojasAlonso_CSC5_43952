/* /* 
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
    int flong , ftall, totala ;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the width of the fence in feet:\n";
    
    cin>> flong ;
    
    cout << "Enter the height of the fence in feet :\n";
    cin >> ftall;
    totala = flong*ftall;
    cout << "If you have ";
    cout << flong;
    cout << " feet in width \n";
    cout << "and ";
    cout << ftall;
    cout << " feet in height , then\n";
    cout << "you have ";
    cout << totala;
    cout << " square feet in total area of fence.\n";
            
    
    
    
    

    return 0;
}

