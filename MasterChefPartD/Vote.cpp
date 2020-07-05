#include "Vote.h"


bool Vote::isImmume(Team &team)
{
    bool isImmume=false;
    for(int i=0; i<team.getNumberOfPlayers(); i++)
    {
        if(team.getPlayers()[i].getImmunity()==true){

            isImmume==true;
        }
        return isImmume;

    }
}
