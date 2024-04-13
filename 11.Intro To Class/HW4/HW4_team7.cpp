#include <iostream>
#include <string>
#include <vector>
using namespace std;

// function:
struct football_player{
    string name;
    string position;
    int touchdowns;
    int Catches;
    int PassingYards;
    int ReceivingYards;
};
void computeStatistics(football_player *player_information, int size){
    int maxTouchdowns = player_information[0].touchdowns;
    int minTouchdowns = player_information[0].touchdowns;
    int maxCatches = player_information[0].Catches;
    int minCatches = player_information[0].Catches;
    int maxPassingYards = player_information[0].PassingYards;
    int minPassingYards = player_information[0].PassingYards;
    int maxReceivingYards = player_information[0].ReceivingYards;
    int minReceivingYards = player_information[0].ReceivingYards;

    vector<string> PlayermaxTouchdowns;
    vector<string> PlayerminTouchdowns;
    vector<string> PlayermaxCatches;
    vector<string> PlayerminCatches;
    vector<string> PlayermaxPassingYards;
    vector<string> PlayerminPassingYards;
    vector<string> PlayermaxReceivingYards;
    vector<string> PlayerminReceivingYards;

    for (int i = 0; i < size ; i++){
        if (player_information[i].touchdowns > maxTouchdowns) {
            maxTouchdowns = player_information[i].touchdowns;
            PlayermaxTouchdowns.clear();
            PlayermaxTouchdowns.push_back(player_information[i].name);
        } else if (player_information[i].touchdowns == maxTouchdowns) {
            PlayermaxTouchdowns.push_back(player_information[i].name);
        }
        
        if (player_information[i].touchdowns < minTouchdowns) {
            minTouchdowns = player_information[i].touchdowns;
            PlayerminTouchdowns.clear();
            PlayerminTouchdowns.push_back(player_information[i].name);
        } else if (player_information[i].touchdowns == minTouchdowns) {
            PlayerminTouchdowns.push_back(player_information[i].name);
        }
    }

    for (int i = 0; i < size ; i++){
        if (player_information[i].Catches > maxCatches) {
            maxCatches = player_information[i].Catches;
            PlayermaxCatches.clear();
            PlayermaxCatches.push_back(player_information[i].name);
        } else if (player_information[i].Catches == maxCatches) {
            PlayermaxCatches.push_back(player_information[i].name);
        }
        
        if (player_information[i].Catches < minCatches) {
            minCatches = player_information[i].Catches;
            PlayerminCatches.clear();
            PlayerminCatches.push_back(player_information[i].name);
        } else if (player_information[i].Catches == minCatches) {
            PlayerminCatches.push_back(player_information[i].name);
        }
    }

    for (int i = 0; i < size ; i++){
        if (player_information[i].PassingYards > maxPassingYards) {
            maxPassingYards = player_information[i].PassingYards;
            PlayermaxPassingYards.clear();
            PlayermaxPassingYards.push_back(player_information[i].name);
        } else if (player_information[i].PassingYards == maxPassingYards) {
            PlayermaxPassingYards.push_back(player_information[i].name);
        }
        
        if (player_information[i].PassingYards < minPassingYards) {
            minPassingYards = player_information[i].PassingYards;
            PlayerminPassingYards.clear();
            PlayerminPassingYards.push_back(player_information[i].name);
        } else if (player_information[i].PassingYards == minPassingYards) {
            PlayerminPassingYards.push_back(player_information[i].name);
        }
    }

    for (int i = 0; i < size ; i++){
        if (player_information[i].ReceivingYards > maxReceivingYards) {
            maxReceivingYards = player_information[i].ReceivingYards;
            PlayermaxReceivingYards.clear();
            PlayermaxReceivingYards.push_back(player_information[i].name);
        } else if (player_information[i].ReceivingYards == maxReceivingYards) {
            PlayermaxReceivingYards.push_back(player_information[i].name);
        }
        
        if (player_information[i].ReceivingYards < minReceivingYards) {
            minReceivingYards = player_information[i].ReceivingYards;
            PlayerminReceivingYards.clear();
            PlayerminReceivingYards.push_back(player_information[i].name);
        } else if (player_information[i].ReceivingYards == minReceivingYards) {
            PlayerminReceivingYards.push_back(player_information[i].name);
        }
    }

    cout << "Number of touchdowns: " << endl;
    cout << "Maximum is " << maxTouchdowns << " by players: ";
    for (int j=0 ; j< PlayermaxTouchdowns.size(); j++){
        cout << PlayermaxTouchdowns[j] << "\t";
    }
    cout << endl << "Minimum is " << minTouchdowns << " by players: ";
    for (int j=0 ; j< PlayerminTouchdowns.size(); j++){
        cout << PlayerminTouchdowns[j] << "\t";
    }

    cout << "Number of catches: " << endl;
    cout << "Maximum is " << maxCatches << " by players: ";
    for (int j=0 ; j< PlayermaxCatches.size(); j++){
        cout << PlayermaxCatches[j] << "\t";
    }
    cout << endl << "Minimum is " << minCatches << " by players: ";
    for (int j=0 ; j< PlayerminCatches.size(); j++){
        cout << PlayerminCatches[j] << "\t";
    }

    cout << "Number of passing yards: " << endl;
    cout << "Maximum is " << maxPassingYards << " by players: ";
    for (int j=0 ; j< PlayermaxPassingYards.size(); j++){
        cout << PlayermaxPassingYards[j] << "\t";
    }
    cout << endl << "Minimum is " << minPassingYards << " by players: ";
    for (int j=0 ; j< PlayerminPassingYards.size(); j++){
        cout << PlayerminPassingYards[j] << "\t";
    }

    cout << "Number of receiving yards: " << endl;
    cout << "Maximum is " << maxReceivingYards << " by players: ";
    for (int j=0 ; j< PlayermaxReceivingYards.size(); j++){
        cout << PlayermaxReceivingYards[j] << "\t";
    }
    cout << endl << "Minimum is " << minReceivingYards << " by players: ";
    for (int j=0 ; j< PlayerminReceivingYards.size(); j++){
        cout << PlayerminReceivingYards[j] << "\t";
    }
}

int main(){
    int size;
    cout << "How many players? ";
    cin >> size;
    football_player *player_information = new football_player[size];
    for (int i = 0; i < size ; i++)
    {
        cout << "This survey will ask some information of player " << i+1 << ": ";
        cout << "\nName: ";
        cin.ignore();
        getline(cin,player_information[i].name);
        cout << "Position: ";
        //cin.ignore();
        getline(cin,player_information[i].position);
        cout << "Touchdowns: ";
        cin >> player_information[i].touchdowns;
        cout << "catches: ";
        cin >> player_information[i].Catches;
        cout << "Passing yards";
        cin >> player_information[i].PassingYards;
        cout << "Receiving yards";
        cin >> player_information[i].ReceivingYards;
    }

    computeStatistics(player_information, size);
    delete[] player_information;
    return 0;
}