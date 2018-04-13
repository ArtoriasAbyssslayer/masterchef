#include "Player.h"
#include <random>

using namespace std;

Player::Player(){
    name = "Default";
    gender = "default";
    age = 0;
    job = "default";
    default_random_engine generator;
    generator.seed(random_device()());
    uniform_int_distribution<mt19937::result_type> dist80(0,80);
    skill = dist80(generator);
    exhaustion = 0;
    popularity = 50;
}

Player::Player(string n, string g, int a, string j){
    name = n;
    gender = g;
    age = a;
    job = j;
    default_random_engine generator;
    generator.seed(random_device()());
    uniform_int_distribution<mt19937::result_type> dist80(0,80);
    skill = dist80(generator);
    exhaustion = 0;
    popularity = 50;
}

Player::~Player(){}
