/* 
 * File:   main.cpp
 * Author: Alonso Rojas
 *
 * Created on March 16, 2015, 1:20 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) { 
    
    float nowpayd, newpay, retro, month;

    
    cout << "enter your current salary \n";
    cin >> nowpayd;
    
    

    newpay=nowpayd*(1.076);

    month = newpay/12;

    retro = (newpay - nowpayd)/2;

    cout <<" you are owed: \n ";
    cout << retro;
    

   
    cout << " Your new yearly salary is:\n ";
    cout << newpay;
    
    
    
    
    cout << " Your new monthly salary is: \n";
    cout << month;
    
   

    return 0;
}

