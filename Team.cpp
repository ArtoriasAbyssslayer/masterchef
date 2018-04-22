#include "Team.h"
#include "iostream"
#include <stdlib.h>

using namespace std;

Team::Team()
{
    color = "default";
    playerCount = 0;
    ingredients = {};
    wins = 0;
}

Team::Team(string c, Player m[], string* i)
{
    color = c;
    playerCount = 0;
    for(int i = 0; i < 11; i++){
        Player *p = &members[i];
        p = &m[i];
    }
    ingredients = i;
    wins = 0;
}

Team::~Team() {}
void Team::status()
{
    cout<<"Team "<<color<<endl;
    cout<<"Ingredients: "<<ingredients<<endl;
    cout<<"\t\tTeam formation"<<endl;
    printMembers();
}
void Team::addPlayer(Player p)
{
    members[playerCount] = p;
    playerCount++;
}
void Team::printMembers(){
    for(int i = 0; i < 11; i++){
        cout <<"#" << i << " " << members[i].getName() << endl;
    }
}
