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
    cout << "enter size:";
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

Number of touchdowns:
====================
    Maximum is 10 by player AAA
    Minimum is 1 by player CCC
 
```C++
void touchdowns(struct football_player player_information[],size)
{
    string max_player, min_player;
    int max = 0;
    int min = player_information[0].touchdowns;
    for(int i = 0; i <size; i++)
    {
        if (player_information[i].touchdowns > max)
            max = player_information[i].touchdowns;
            max_player = player_information[i].name;
        if (player_information[i].touchdowns < min )
            min = player_information[i].touchdowns;
            min_player = player_information[i].name;
    }
    cout << "Maximum is: " << max << " by player" << max_player;
    cout << "Minimum is: " << min << " by player" << min_player;
}
```
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


