/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 15, 2015, 7:50 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
const double sodasw = 0.001;
int soda;
float tokillm;
float WeightMouse;
float sweetnrg;
float guyw;

cout << "This program calculates how many cans of soda it takes to kill you !\n";
cout << "Each can contains 0.001 (0.1%) of artificial sweetener\n";

cout << "Enter the amount of Artificial Sweetner needed to kill a mouse: \n";
cin >> tokillm;



cout << "Enter the weight of the dieter in grams at a point in which his/her dieting will be stopped: \n";
cin >> guyw;

sweetnrg = (tokillm/35) * guyw;

soda = (sweetnrg/sodasw);

cout << "The amount of Diet Soda Pop Can's that would kill the dieter is: " << soda; 


    return 0;
}

