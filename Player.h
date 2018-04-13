#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>

using namespace std;

class Player{

    private:
        string name;
        string gender;
        int age;
        string job;
        int skill;
        int exhaustion;
        int popularity;

    public:
        Player();
        Player(string n, string g, int a, string j);
        ~Player();

        string getName() const {return name;}
        string getGender() const {return gender;}
        int getAge() const {return age;}
        string getJob() const {return job;}
        int getSkill() const {return skill;}
        int getExhaustion() const {return exhaustion;}
        int getPopularity() const {return popularity;}

        void setName(string s) {name = s;}
        void setGender (string s) {gender = s;}
        void setAge (int a) {age = a;}
        void setJob (string s) {job = s;}
        void setSkill (int s) {skill = s;}
        void setExhaustion (int e) {exhaustion = e;}
        void setPopularity (int p) {popularity = p;}
};


#endif // PLAYER_H_INCLUDED
