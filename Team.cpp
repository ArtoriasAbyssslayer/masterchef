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
//constructor implementation
Team::Team(string c, Player m[], string* i)
{
    color = c;
    playerCount = 0;
    for(int i = 0; i < 11; i++){
        Player *p = &members[i];//pointer to members address
        p = &m[i];       //move array by changing pointer
    }
    ingredients = i;
    wins = 0;
}
void Team::status()
{
    cout<<"Team "<<color<<endl;
    cout<<"Ingredients: "<<ingredients<<endl;
    cout<<"\t\tTeam formation"<<endl;
    printMembers(); //prints the name of the Members implementation below
}

void Team::addPlayer(Player p)
{
    members[playerCount] = p; //inserts the object to the the members array
    playerCount++;  //moves the index to next position
    cout<<"==Player Insertion done=="<<endl;
}
void Team::printMembers(){
    for(int i = 0; i < 11; i++){
        cout <<"#" << i << " " << members[i].getName()<< endl;
    }
}
