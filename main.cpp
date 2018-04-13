#include <iostream>
#include "Player.h"

using namespace std;

int main(){
    //tests
    Player p;
    cout << p.getJob() << endl;
    Player bob("Bob", "dude", 23, "barber");
    cout << bob.getSkill() << endl;
    return 0;
}
