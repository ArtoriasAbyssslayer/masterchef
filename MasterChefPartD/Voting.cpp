// YOU HAVE TO FILL THIS CLASS.
#include "Voting.h"
#include "Vote.h"
#include <map>
#include <string>
#include <cstdlib>
#include "Vote.cpp"
using namespace std;

vector<Vote> Voting::votes;
map<string,int> Voting::results;



void Voting::votingProcess(Team &team)
{
    for(int i=0; i<11; i++)
    {
        //check if we have valid player on i
        if(team.getPlayers()[i].getAge() == 0)
            continue;
        for(int j=0; j<team.getPlayers()[i].getVotes(); j++)
        {

            Vote vote(team.getPlayers()[minPlayerscore(team, i)].getName(), "kappakeepo");
            if(vote.isImmume(&team))
            {
                continue;
            }else
            votes.push_back(vote);

        }
    }
    for(int i = 0; i<votes.size(); i++)
    {
        votes[i].status();
    }
    for(int i = 0; i<votes.size(); i++)
    {
        map<string, int>::iterator it = results.find(votes[i].getVoted());
        if(it == results.end())
        {
            results.insert(pair<string, int>(votes[i].getVoted(), 0));
        }
        else
        {
            it->second++;
        }
    }
    //print the map
    for(map<string,int>::iterator it =results.begin(); it!=results.end(); it++)
    {
        cout<< it->first<<"->" << it->second << endl;
    }
    //αρχικοποίηση max1 και max2 με τα ονόματα των πρώτων δύο παικτών του map
    map<string,int>::iterator it = results.begin();
    string max1 = it->first;
    it++;
    string max2 = it->first;
    it++;
    while(it!=results.end())
    {
        if(it->second>results[max1])
        {
            max2 = max1;
            max1 = it->first;
        }
        else if(it->second>results[max2])
        {
            max2 = it->first;
        }
        it++;
    }
    int candidate1;
    int candidate2;
    for(int i=0; i<11; i++)
    {
        if(team.getPlayers()[i].getAge() == 0)
            continue;
        //check if strings are equal
        if(team.getPlayers()[i].getName().compare(max1)==0)
        {
            candidate1 = i;
        }
        else if(team.getPlayers()[i].getName().compare(max2) == 0)
        {
            candidate2 = i;
        }
    }

    team.getPlayers()[candidate1].setCandidate(true);
    team.getPlayers()[candidate2].setCandidate(true);
    team.removePlayer(max1);
    //clear
    votes.clear();
    results.clear();
    //team.status(true);
}

//voting is an integer that is used in order to use that method in a for loop and so we know who votes
int Voting::minPlayerscore(Team &team, int voting)
{
    int min = -1;
    for(int i = 0; i < 11; i++){
        if(team.getPlayers()[i].getAge() == 0)
            continue;

        //check
        if(!(team.getPlayers()[i].getImmunity() && i == voting))
        {
            min = i;
            break;
        }
    }
    if(min == -1){
        cout << "Run out of possible players to vote for" << endl;
        return -1;
    }
    for(int i=min+1; i<11; i++)
    {
        //check if there is a valid player at index i
        if(team.getPlayers()[i].getAge() == 0)
            continue;
        if(playerScore(team.getPlayers()[i]) < playerScore(team.getPlayers()[min]))
        {
            if(!(team.getPlayers()[i].getImmunity() && i == voting))
            {
                min = i;
            }
        }
    }
    return min;
}


float Voting::playerScore(Player &p)
{
    //put noise to randomize the results
    float noise = (float) rand() / RAND_MAX * 100 - 50;
    return p.getPopularity() + p.getTechnique() / 2.0 + noise;
}


