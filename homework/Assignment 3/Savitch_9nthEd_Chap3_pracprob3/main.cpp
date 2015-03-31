/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 30, 2015, 11:04 PM
 */

#include <iostream>

using namespace std;

//user libraries 

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    float month;
    float day;
    float answr;
    
    cout << " please enter the number of your month of birth "<<endl;
    cin >> month;
    
    cout << " Please enter the number of the day you were born"<<endl;
    cin >> day;
    
    answr=(month*100)+day;
    
    if (answr>=321&&answr<=419){
        cout << "aries";
    }
    else if (answr>=420&&answr<=520){
        cout << "taurus";
    }
    else if (answr>=521&&answr<=621){
        cout << "gemeni";
    }
    else if (answr>=622&&answr<=722){
        cout << "cancer";
    }
    else if (answr>=723&&answr<=822){
        cout << "Leo";
    }
    else if (answr>=823&&answr<=922){
        cout << "Virgo";
    }
    else if (answr>=923&&answr<=1022){
        cout << "Libra";
    }
    else if (answr>=1023&&answr<=1121){
        cout << "Scorpio";
    }
    else if (answr>=1122&&answr<=1221){
        cout << "Sagittarius";
    }
    else if (answr>=1222){ 
        cout << "Capricorn";
    }
    else if (answr>=100&&answr<=119){
        cout << "capricorn";
    }
    else if (answr>=120&&answr<=218){
        cout << "Aquarius";
    }
    else if (answr>=219&&answr<=320){
        cout << "pisces";
    }
    return 0;
}

