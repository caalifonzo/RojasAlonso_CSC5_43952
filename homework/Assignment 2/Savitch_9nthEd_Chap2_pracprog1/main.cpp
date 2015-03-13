/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 13, 2015, 6:33 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{

float cweight, ctotal, tboxes, answer; // cereal weight, cereal total, answer 

{ 
cout << "Enter the weight in ounces of the cereal box.\n";
cin >> cweight;

ctotal = ((cweight*2.83495231)/100000);
tboxes = 35273.92/cweight;

cout << "Your cereal weighs " << ctotal << " metric tons,\n";
cout << "It would take " << tboxes << " cereal boxes to have a metric ton of cereal.\n";
cout << "Would you like to convert another cereal weight.\n"
<< "enter (y/n)\n"
<< "and press return: ";
cin >> answer;
}while (answer == 'y' || answer == 'n');

cin.sync();
cin.get();

  
    return 0;
}

