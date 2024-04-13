Homework-4
Team#: 7 
Team Member-1:________________________ Member’s Contribution (in %) __
Team Member-2:________________________ Member’s Contribution (in %) __
Team Member-3:________________________ Member’s Contribution (in %) __

# Submission 
1.	Work on the following requirements.
2.	Rename the CPP file and algorithm file to HW4_Team# (e.g., HW4_Team1.cpp)
3.	Upload your files to Canvas.

Problem Statement: Write a program that declares a structure (struct) to store the data of a football player. The structure should include the player’s name, position, number of touchdowns, catches, passing yards, and receiving yards. [10 points]

```C++
//Function name football_player
struct football_player{
    string football_player;
    string position;
    int touchdowns;
    int catches;
    int passing_yards;
    int receiving_yards;
};
```

Create an array of the struct type to store players’ information. Let the user enter the size of the array (dynamic array). You must use a pointer to the array. For instance, if the user wants to store 5 players’ information, s/he would enter 5 for the array size, and your program should create an array of size 5. [20 points]

```C++
    int size;
    cout << "How many players? ";
    cin >> size;
    football_player *player_information = new football_player[size];
    for (int i = 0; i < size ; i++)
    {
        cout << "This survey will ask some information of player " << i+1 << ": ";
        cout << "\n Name: ";
        cin.ignore();
        getline(cin,player_information[i].name);
        cout << "\n Position: ";
        cin.ignore();
        getline(cin,player_information[i].position);
        cout << "Touchdowns: ";
        cin >> player_information[i].touchdowns;
        cout << "catches: ";
        cin >> player_information[i].catch;
        cout << "Passing yards";
        cin >> player_information[i].passing_yards;
        cout << "Receiving yards";
        cin >> player_information[i].receiving_yards;
    }

```
Prompt the user to enter each player’s information. In the previous example, you will prompt the user 5 times – one time per player. Store the user’s information in the array. [10 points].

Compute max and min statistics of the data in the following format [30 points]:
``` C++
void computeStatistics(football_player *player_information, int size){
    int maxTouchdowns = player_information[0].touchdowns;
    int minTouchdowns = player_information[0].touchdowns;
    int maxCatches = player_information[0].catch;
    int minCatches = player_information[0].catch;
    int maxPassingYards = player_information[0].passing_yards;
    int minPassingYards = player_information[0].passing_yards;
    int maxReceivingYards = player_information[0].receiving_yards;
    int minReceivingYards = player_information[0].receiving_yards;

    vector<string> maxTouchdowns;
    vector<string> minTouchdowns;
    vector<string> maxCatches;
    vector<string> minCatches;
    vector<string> maxPassingYards;
    vector<string> minPassingYards;
    vector<string> maxReceivingYards;
    vector<string> minReceivingYards;

    for (int i = 1; i < size ; i++){
        if(player_information[i].touchdowns > maxTouchdowns){
            maxTouchdowns.clear();
            maxTouchdowns.push_back(player_information[i].name);
        }
        else if(player_information[i].touchdowns == maxTouchdowns){
            maxTouchdowns.push_back(player_information[i].name);
        }

        if(player_information[i].touchdowns < maxTouchdowns){
            maxTouchdowns.clear();
            maxTouchdowns.push_back(player_information[i].name);
        }
        else if(player_information[i].touchdowns == maxTouchdowns){
            maxTouchdowns.push_back(player_information[i].name);
        }

    }


}
```


Number of touchdowns:
====================
    Maximum is 10 by player AAA
    Minimum is 1 by player CCC
 
Number of catches:
====================
    Maximum is 3 by player BBB
    Minimum is 0 by player CCC



Number of passing yards:
====================
    Maximum is 50.5 by player AAA
    Minimum is 0 by player CCC

Number of receiving yards:
====================
    Maximum is 100.3 by player DDD
    Minimum is 0 by player CCC

Input Validation: Do not accept negative numbers for input. If the user enters a negative number, display an error message and let the user enter the value again. Repeat this step as long as the user does not correct the mistake [10 points]. 
Programming Style: Make sure the programming style is followed. [10 points]
Programming Comments: Please make sure the code is well-commented. [10 points]

Note: Use of ChatGPT or similar generative AI is not allowed. 


