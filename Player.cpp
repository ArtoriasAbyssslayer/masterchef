#include "Player.h"
#include <stdlib.h>
#include <iostream>
#include <assert.h>

using namespace std;

Player::Player(){
    name = "Player";
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
    assert(0<=exhaustion<=100);//for debug
}
void Player::eat(){
    cout<<"O paikths efage"<<endl;
}
void Player::doDay(){  //parameter deleted as we don't implement something with doDay in current form of the project
    exhaustion += rand()%40+20;
    assert(0<=exhaustion<=100);//for debug
    train();
    popularity+=rand()%20-10;
    assert(0<=popularity<=100);
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
