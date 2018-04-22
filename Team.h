#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED
#include <string>
#include "Player.h"


using namespace std;
class Team{

    private:
        int playerCount;
        string color;
        Player members[11];  //array with objects - class Player
        string* ingredients;
        int wins;

        //TODO: add array sizes, verify types with xarh

    public:
        // Constructors / Destructors
        Team();
        Team(string color, Player* members, string* ingredients);
        ~Team();
        // getters
        int getPlayerCount() const {return playerCount;}
        int getWins() const {return wins;}
        string getColor() const {return color;}
        string* getIngredients() const {return ingredients;}
        Player* getMembers() {return members;}
        // setters
        void setColor(string c) {color = c;}
        void setIngredients(string* i) {ingredients = i;}
        //void setMembers(Player m[]) {members = m;}
        void setWins(int w) {wins=w;}
        void setPlayerCount(int p) {playerCount=p;}
        //Methods
        void status();
        void addPlayer(Player p);
        void printMembers();
};

#endif // TEAM_H_INCLUDED
