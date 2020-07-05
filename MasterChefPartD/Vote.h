#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED


#define VOTE_H_INCLUDED
#include <iostream>
#include <string>
#include "Team.h"

using namespace std;

class Vote{
    string voted;
    string reason;
public:
    string getVoted(){return voted;}
    string getReason(){return reason;}
    void   setReason(string r){reason = r;}
    void   setVoted(string v){voted = v;}

    Vote()
    {
        voted = "";
        reason = "";
    };
    Vote(string voted, string reason)
    {
        this->voted=voted;
        this->reason=reason;
    }
    ~Vote(){cout<<"Vote->"<<voted<<"\nWritten down"<<endl;}

    void status(){
        cout<<"The voted is:"<<voted<<endl;
        cout<<"The reason is:"<<reason<<endl;
    }
    bool isImmume(Team &team);

};

#endif // VOTE_H_INCLUDED
