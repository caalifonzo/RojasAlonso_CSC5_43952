/* 
 * File:   main.cpp
 * Author: Junketsu-pc Alonso rojas
 *
 * Created on March 25, 2015, 3:29 AM
 * its a rock paper scissors game
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string pone; //player one
    string ptwo; //player two
    string r; //rock
    string p; //paper
    string s; //scissors
    
    cout<<"this is a rock paper scissors game application for two players"<<endl;
    cout<<"player one, please enter r for rock, p for paper, or s for scissors"<<endl;
    cin>> pone;
    //player one enters their choice
    
    cout<<"player two, please enter r for rock, p for paper, or s for scissors"<<endl;
    cin>> ptwo;
    //player two enters their choice
    
    if (pone=="r"&&ptwo=="p") 
{ 
        cout<<"paper beats rock, player two wins"<<endl;
    }
    else if (pone=="r"&&ptwo=="s")
    {
        cout<<"rock beats scissors, player one wins"<<endl;
    }
    else if (pone=="r"&&ptwo=="r"){
        cout<<"both parties chose rock, the result is a tie"<<endl;
    }
    
    else if (pone=="p"&&ptwo=="r"){
        cout<<"paper beats rock, player one wins"<<endl;
    }
    else if (pone=="p"&&ptwo=="s"){
        cout<<"scissors beats paper, player two wins"<<endl;
    }
    else if (pone=="p"&&ptwo=="p"){
        cout<<"both parties chose paper, the result is a tie"<<endl;
    }
    else if (pone=="s"&&ptwo=="p"){
        cout<<"scissors beats paper, player one wins"<<endl;
    }
    else if (pone=="s"&&ptwo=="r"){
        cout<<"rock beats scissors, player two wins"<<endl;
    }
    else if (pone=="s"&&ptwo=="s"){
        cout<<"both parties chose scissors, the result is a tie"<<endl;
    }

    return 0;
}

