#ifndef VOTING_H_INCLUDED
#define VOTING_H_INCLUDED

#include "Vote.h"
#include <vector>
#include <map>
#include "Team.h"
using namespace std;

class Voting{
public:
    static vector<Vote> votes;
    static map<string,int> results;
    static void votingProcess(Team &team);
    static float playerScore(Player &p);
    static int minPlayerscore(Team &team, int voting);
};


#endif // VOTING_H_INCLUDED
