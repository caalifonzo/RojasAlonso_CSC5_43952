/* 
 * File:   main.cpp
 * Author: Alonso ROjas
 *
 * Created on March 15, 2015, 1:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
int n, count(10);
float answer, guess, r;


cout << "This program will find you the square root of a number you choose using the Babylonian algorithm.\n";
cout << "enter a whole number:\n";
cin >> n;
cout << "enter whatever number you want to divide it by:\n";
cin >> guess;

r =n/guess;
guess=(guess+r)/2;

while (count > 0)
{
r = n/guess;
guess = (guess + r)/2;

if (guess <= (guess * 0.01) + guess)
answer = guess;
else
r = n/guess;
guess = (guess + r)/2;

count-=1;
}


cout << "The sqaure root of "<< n << " is " << answer;
cout << endl;
    
return 0;
}

