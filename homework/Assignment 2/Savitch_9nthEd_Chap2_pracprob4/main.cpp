/* 
 * File:   main.cpp
 * Author: alonso rojas
 *
 * Created on March 15, 2015, 4:40 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string teachr;   string name;   string food; int numbr;    string adject;   string color;   string animal;
    
    cout << "welcome to my madlibs program, please enter the following and press enter after each \n";
    cout << " your teacher's name \n";
    cin >> teachr;
    cout << "your name \n";
    cin >> name;
    cout << "a food \n";
    cin >> food;
    cout << "a number between 100 and 120 \n";
    cin >> numbr;
    cout << "an adjective \n";
    cin >> adject;
    cout << "a color \n";
    cin >> color;
    cout << "an animal \n";
    cin >> animal;
    cout << "dear instructor\n";
    cout << teachr;
    cout << " I am sorry that i am unable to turn in my homework at this time. First I ate a rotten \n";
    cout << food;
    cout << ", Which made me turn \n";
    cout << color;
    cout << " and extremely ill. I came down with a fever of \n";
    cout << numbr;
    cout << ". Next, my \n";
    cout << " pet \n";
    cout << animal;
    cout << " must have smelled the remains of the \n";
    cout << food;
    cout << " on my homework, because he ate it. I am currently rewriting my homework an hope you will accept it late. sincirely, \n";
    cout << name;
    
    //exit stage right
    return 0;
}

