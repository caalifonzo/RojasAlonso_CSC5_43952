/* 
 * File:   main.cpp
 * Author: Junketsu-pc
 *
 * Created on March 30, 2015, 11:41 PM
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
        cout << "aries, you are most comfortable with other aries, Leo, and Sagittarius";
    }
    else if (answr>=420&&answr<=520){
        cout << "taurus, you are most compatible with other taurus, Virgo, and capricorn";
    }
    else if (answr>=521&&answr<=621){
        cout << "gemeni, you are most compatible with other gemeni, Libra, and aquarius";
    }
    else if (answr>=622&&answr<=722){
        cout << "cancer, you are most compatible with other cancer, scorpio, and pisces";
    }
    else if (answr>=723&&answr<=822){
        cout << "Leo, you are most compatible with other leos, as well as aries and sagittarius";
    }
    else if (answr>=823&&answr<=922){
        cout << "Virgo, you are most compatible with other virgo, taurus, and capricorn";
    }
    else if (answr>=923&&answr<=1022){
        cout << "Libra, you are most compatible with other libra, gemeni, and aquarius";
    }
    else if (answr>=1023&&answr<=1121){
        cout << "Scorpio, you are most compatible with other scorpio, cancer, and pisces";
    }
    else if (answr>=1122&&answr<=1221){
        cout << "Sagittarius, you are most compatible with other sagittarius, as well as aries and leo";
    }
    else if (answr>=1222){ 
        cout << "Capricorn, you are most compatible with other capricorn, as well as virgo and taurus";
    }
    else if (answr>=100&&answr<=119){
        cout << "capricorn,  you are most compatible with other capricorn, as well as virgo and taurus";
    }
    else if (answr>=120&&answr<=218){
        cout << "Aquarius, you are most compatible with other aquariuses, gemeni, and libra";
    }
    else if (answr>=219&&answr<=320){
        cout << "pisces, you are most compatible with other pisces, cancer, and scorpio";
    }
    return 0;
}

