/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 15, 2015, 2:18 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{ 
    float answer, mph;
    
    cout << " this program will convert you mph into minutes and seconds per mile.\n";
    cout << " please enter the desired miles per hour (mph).\n";
    cin >> mph;
    
    answer=(60/mph);
            
            cout << "your mph in minutes and seconds per mile is\n";
            cout << answer;
    //exit stage right 
    
    
    
    

    return 0;
}

