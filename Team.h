#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

class Team{

    private:
        string color;
        Player* members;
        string* ingredients;

        //TODO: add array sizes, verify types with xarh

    public:
        Team();
        Team(string color, Player* members, string* ingredients);
        ~Team();

        string getColor() const {return color;}
        string* getIngredients() const {return ingredients;}
        Player* getMembers() const {return members;}

        void setColor(string c) {color = c;}
        void setIngredients(string* i) {ingredients = i;}
        void setMembers(Player* m) {members = m;}
};

#endif // TEAM_H_INCLUDED
