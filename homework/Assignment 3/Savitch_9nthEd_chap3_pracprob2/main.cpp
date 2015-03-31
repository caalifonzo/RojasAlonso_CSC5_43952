/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 25, 2015, 4:08 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float balance;
    
    cout<< "this program computes the interest due, the total amount due, and the minimum payment for a revolving credit account"<<endl;
    cout<< "please enter your account balance"<<endl;
    cin>> balance;
    
    if (balance<"1000.00"){
        
        balance=balance*1.5;
        
        cout<< "your total is "<<endl;
        cout<< balance;
    }
    
    

    return 0;
}

