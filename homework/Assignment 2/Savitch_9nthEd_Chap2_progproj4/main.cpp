/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 18, 2015, 3:17 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
int amneed, intr,facev,monthp;// am =amount_needed , face = face_value , interest = interest_rate,mp = monthly_payment
int time;
char answer;

do
{
cout << "The amount you need \n";
cin >>amneed;

cout << "Interest rate \n";
cin >> intr;

cout << "How many months the loan is to last \n";
cin >> time;

monthp =facev/time;
facev =amneed/1-(intr*time);



cout << "Total face value is " << facev << endl;
cout << "your monthly payment plan is " << monthp << endl;

cout << "If you wish to re-calculate press y for yes?\n";
		cin >> answer;

}
while (answer == 'y' || answer == 'Y');

		cout << "Goodbye!\n";

    return 0;
}

