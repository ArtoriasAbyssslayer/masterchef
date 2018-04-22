#include "Player.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Player::Player(){
    name = "No player";
    gender = "-";
    age = 0;
    job = "-";
    skill = rand()%80;
    wins=0;
    exhaustion = 0;
    popularity = 50;
}

Player::Player(string n, string g, int a, string j){
    name = n;
    gender = g;
    age = a;
    job = j;
    wins = 0;
    skill = rand()%80;
    exhaustion = 0;
    popularity = 50;
}


void Player::sleep(){
    exhaustion = 0;
}
void Player::train(){
    skill+=5;
}
void Player::eat(){
    cout<<"O paikths efage"<<endl;
}
void Player::doDay(int* dayCounter){
    exhaustion += rand()%40+20;
    train();
    popularity+=rand()%20-10;
}
void Player::status(){
    cout<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Job: "<<job<<endl;
    cout<<"Skill: "<<skill<<endl;
    cout<<"Exhaustion: "<<exhaustion<<endl;
    cout<<"Popularity: " <<popularity<<endl;
}
