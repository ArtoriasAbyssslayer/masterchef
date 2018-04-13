#include "Team.h"

using namespace std;

Team::Team(){
    color = "default";
    members = {};
    ingredients = {};
}

Team::Team(string c, Player* m, string* i){
    color = c;
    members = m;
    ingredients = i;
}

Team::~Team(){}
