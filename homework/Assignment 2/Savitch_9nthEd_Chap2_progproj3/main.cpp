/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 16, 2015, 1:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{ 
    float nowpayd, newpay, retro, months, monthin;

    
    cout << "enter your current salary \n";
    cin >> nowpayd;
    
    cout << "enter the desired months that you want to calculate for \n";
    cin >> monthin;
    
    

    newpay=nowpayd*(1.076);

    months = newpay/12;

    retro = (newpay - nowpayd)/2;
    
    monthin = months*monthin;

    cout <<" you are owed: \n ";
    cout << retro;
    

   
    cout << " Your new yearly salary is:\n ";
    cout << newpay;
    
    
    
    
    cout << " Your new monthly salary is: \n";
    cout << months;
    
    cout << " your specific salary based on the months you requested is \n";
    cout << monthin;

    return 0;
}

