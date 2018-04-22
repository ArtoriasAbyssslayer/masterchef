#include <iostream>
#include "Player.h"
#include <time.h>
#include <cstdlib>
#include <string>
#include "Team.h"

using namespace std;

int main()
{
    cout<< "\t\t MASTERCHEF 2018 "<<endl;
    srand(time(NULL));
    // Team initialization
    char opcode;
    Team blue("Blue", {}, {});
    Team red("Red", {}, {});
    while(true){
        cout<< "Command list :"<<endl;
        cout<<"*Insert Player ~ a"<<endl;
        cout<<"*View team info ~ t"<<endl;
        cout<<"*View player info ~ p"<<endl;
        cout<<"*Exit masterchef ~ e"<<endl;
        cout << "Enter command:" << endl;
        cin>>opcode;
        switch(opcode)
        {
        case 'a':
        {
            cout << "Enter player name:" << endl;
            string name;
            cin >> name;
            cout << "Enter player gender:" << endl;
            string gender;
            cin >> gender;
            cout << "Enter player age:" << endl;
            int age;
            cin >> age;
            cout << "Enter player job:" << endl;
            string job;
            cin >> job;
            cout << "Enter player team:" << endl;
            Player p(name, gender, age, job);
            char team;
            cin >> team;
            switch(team)
            {
            cout << "Specify player's team(r/b)" << endl;
            case 'b':
                blue.addPlayer(p);
                break;
            case 'r':
                red.addPlayer(p);
                break;
            default:
                cout << "There is no such team" << endl;
            }
            break;
        }
        case 't':
        {
            char team;
            cout << "Specify team(r/b)" << endl;
            cin >> team;
            switch(team)
            {
            case 'b':
                blue.status();
                break;
            case 'r':
                red.status();
                break;
            default:
                cout << "There is no such team" << endl;
            }
            break;
        }
        case 'p':
        {
            char team;
            cout << "Specify player's
            team(r/b)" << endl;
            cin >> team;
            cout <<"Specify the player's name or code from the list"<<endl;
            switch(team)
            {
            case 'b':
            {
                blue.printMembers();
                string player;
                cin >> player;
                try
                {
                    int index = stoi(player);            //conversion string to int
                    blue.getMembers()[index].status();
                }
                catch(invalid_argument)
                {
                    for(int i = 0; i < blue.getPlayerCount(); i++)
                    {
                        if(player != blue.getMembers()[i].getName())
                        {
                            continue;
                        }
                        blue.getMembers()[i].status();
                    }
                }
                break;
            }
            case 'r':
            {
                red.printMembers();
                string player;
                cin >> player;
                try
                {
                    int index = stoi(player);            //mapping string to int
                    red.getMembers()[index].status();
                }
                catch(invalid_argument)
                {
                    for(int i = 0; i < red.getPlayerCount(); i++)
                    {
                        if(player != red.getMembers()[i].getName())
                        {
                            continue;
                        }
                        red.getMembers()[i].status();
                    }
                }
                break;
            }
            default:
                cout << "There is no such team" << endl;
            }
            break;
        }
        case 'e':
        {
            blue.printMembers();
            string player;
            cin >> player;
            try
            {
                int index = stoi(player);            //mapping string to int
                blue.getMembers()[index].status();
            }
            catch(invalid_argument)
            {
                for(int i = 0; i < blue.getPlayerCount(); i++)
                {
                    if(player != blue.getMembers()[i].getName())
                    {
                        continue;
                    }
                    blue.getMembers()[i].status();
                }
            }
            return EXIT_SUCCESS;
        }
        default:
            cout<<"Unknown command"<<endl;
        }
    }


    return 0;
}
