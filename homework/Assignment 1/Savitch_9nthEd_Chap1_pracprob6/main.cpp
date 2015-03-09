/*/* 
 * File:   main.cpp
 * Author: Alonso Rojas
 *
 * Created on March 6, 2015, 1:40 AM
 */

#include <iostream> //extra space between the < and the iosteam file//

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) //omitted int from this line, misspelled the word main, omitted parenthesis//
{
    int numpods , pppod, totalp ;
    
    cout << "Press return after entering a number.\n"; //omitted one of the < in the included dirrective//
    cout << "Enter the number of pods:\n";
    
    cin>> numpods ;
    
    cout << "Enter the number of peas ina pod:\n"; //misspelled cout//
    cin >> pppod;     //misspelled cin//
    totalp = numpods*pppod;//forgot one of the ps in pppod//
    cout << "If you have";
    cout << numpods;
    cout << " pea pods\n";
    cout << "and ";
    cout << pppod;
    cout << "peas in each pod, then\n";
    cout << "you have ";
    cout << totalp;
    cout << " peas in all the pods.\n";
            
    
    
    
    

    return 0;
}

 
