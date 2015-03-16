/* 
 * File:   main.cpp
 * Author: Alonso Rojas
 * Email: Caalifonzo@gmail.com
 * Assignment number 2
 * Description: find the radius of a sphere
 * Created on March 15, 2015, 7:33 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    double radius, vm;
    
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    
    vm = (4.0/3.0)*3.1415*radius*radius*radius;
    cout << " The volume is " << vm << endl;
    
    return 0;
}

