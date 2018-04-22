#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>

using namespace std;

class Player{

    private:
        string name;
        string gender;
        int age;
        int wins;
        string job;
        int skill; //the ratio of skill "mapped" to integers
        int exhaustion;//the ratio of exhaustion
        int popularity;

    public:
        // Constructors/Destructors
        Player();
        Player(string n, string g, int a, string j);
        ~Player();
        //getters
        string getName() const {return name;}
        string getGender() const {return gender;}
        int getAge() const {return age;}
        string getJob() const {return job;}
        int getSkill() const {return skill;}
        int getExhaustion() const {return exhaustion;}
        int getPopularity() const {return popularity;}
        int getWins() const {return wins;}
        //setters
        void setName(string s) {name = s;}
        void setGender(string s) {gender = s;}
        void setAge(int a) {age = a;}
        void setJob(string s) {job = s;}
        void setSkill(int s) {skill = s;}
        void setExhaustion(int e) {exhaustion = e;}
        void setPopularity(int p) {popularity = p;}
        void setWins(int w) {wins = w;}
        //methods
        void sleep();
        void train();
        void eat();
        void doDay();
        void status();
};


#endif // PLAYER_H_INCLUDED
