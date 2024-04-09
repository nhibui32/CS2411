// Homework-4
// Team#: 7 
// Team Member-1:________________________ Member’s Contribution (in %) __
// Team Member-2:________________________ Member’s Contribution (in %) __
// Team Member-3:________________________ Member’s Contribution (in %) __

#include <iostream>
#include <string>
using namespace std;

struct football_player{
    string name;
    string position;
    int touchdowns;
    int catches;
    int passing_yards;
    int receiving_yards;
};

void catches(struct football_player player_information[],int size){
    string max_player;
    string min_player;
    int max = 0;
    int min = player_information[0].catches;
    for(int i = 0; i < size; i++){
        if (player_information[i].catches > max){
            max = player_information[i].catches;
            max_player = player_information[i].name;
        }
    }
    for(int j = 0; j < size; j++){
        if (player_information[j].catches < min ){
            min = player_information[j].catches;
            min_player = player_information[j].name;
        }
    }
    cout << endl << "Numbe of catches: " << endl;
    cout << "Maximum is: " << max << " by player " << max_player << endl;
    cout << "Miximum is: " << min << " by player " << min_player << endl << endl;
}

void passing_yards(struct football_player player_information[],int size){
    string max_player;
    string min_player;
    int max = 0;
    int min = player_information[0].passing_yards;
    for(int i = 0; i < size; i++){
        if (player_information[i].passing_yards > max){
            max = player_information[i].passing_yards;
            max_player = player_information[i].name;
        }
    }
    for(int j = 0; j < size; j++){
        if (player_information[j].passing_yards < min ){
            min = player_information[j].passing_yards;
            min_player = player_information[j].name;
        }
    }
    cout << endl << "Numbe of passing yards: " << endl;
    cout << "Maximum is: " << max << " by player " << max_player << endl;
    cout << "Miximum is: " << min << " by player " << min_player << endl << endl;
}

void receiving_yards(struct football_player player_information[],int size){
    string max_player;
    string min_player;
    int max = 0;
    int min = player_information[0].receiving_yards;
    for(int i = 0; i < size; i++){
        if (player_information[i].receiving_yards > max){
            max = player_information[i].receiving_yards;
            max_player = player_information[i].name;
        }
    }
    for(int j = 0; j < size; j++){
        if (player_information[j].receiving_yards < min)
        {min = player_information[j].receiving_yards;
        min_player = player_information[j].name;}
    }
    cout << endl << "Numbe of receiving_yards: " << endl;
    cout << "Maximum is: " << max << " by player " << max_player << endl;
    cout << "Miximum is: " << min << " by player " << min_player << endl << endl;
}

void touchdowns(struct football_player player_information[],int size)
{
    string max_player;
    string min_player;
    int max = 0;
    int min = player_information[0].touchdowns;
    for(int i = 0; i < size; i++){
        if (player_information[i].touchdowns > max){
            max = player_information[i].touchdowns;
            max_player = player_information[i].name;
        }
    }
    for(int j = 0; j < size; j++){
        if (player_information[j].touchdowns < min ){
            min = player_information[j].touchdowns;
            min_player = player_information[j].name;
        }
    }
    cout << endl << "Numbe of touchdowns: " << endl;
    cout << "Maximum is: " << max << " by player " << max_player << endl;
    cout << "Miximum is: " << min << " by player " << min_player << endl << endl;
}


int main()
{
    int size;
    cout << "enter size:";
    cin >> size;
    while(size < 0){
        cout << "Input invalidation. Please enter a positive number: ";
        cin >> size;
    }
    cin.ignore();
    football_player *player_information = new football_player[size];
    for (int i = 0; i < size ; i++){
        cout << "This survey will ask some information of player " << i+1 << ": " << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin,player_information[i].name);
        cout << "Position: ";
        cin.ignore();
        getline(cin,player_information[i].position);
        cout << "Touchdowns: ";
        cin >> player_information[i].touchdowns;
        while(player_information[i].touchdowns < 0){
            cout << "Input invalidation. Please enter a positive number: ";
            cin >> player_information[i].touchdowns;
        }
        cout << "catches: ";
        cin >> player_information[i].catches;
         while(player_information[i].catches < 0){
            cout << "Input invalidation. Please enter a positive number: ";
            cin >> player_information[i].catches;
        }
        cout << "Passing yards: ";
        cin >> player_information[i].passing_yards;
        while(player_information[i].passing_yards < 0){
            cout << "Input invalidation. Please enter a positive number: ";
            cin >> player_information[i].passing_yards;
        }
        cout << "Receiving yards: ";
        cin >> player_information[i].receiving_yards;
        while(player_information[i].receiving_yards < 0){
            cout << "Input invalidation. Please enter a positive number: ";
            cin >> player_information[i].receiving_yards;
        }
        cin.ignore();
    }
    touchdowns(player_information, size);
    catches(player_information, size);
    passing_yards(player_information, size);
    receiving_yards(player_information, size);
    delete []player_information;
    return 0 ;
}