#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string cp_choice;
string user_choice;

void computerchoice()
{
    vector<string> computer_choice = {"rock", "paper", "scissor"};
    int i = rand() % 3;
    cout << computer_choice[i] << endl;
    ::cp_choice = computer_choice[i];
}

void play_game()

{

    if (::user_choice == ::cp_choice)
    {
        cout << "It is a tie!" << endl;
    }
    else
    {
        if (::user_choice == "rock")
        {
            if (::cp_choice == "paper")
            {
                cout << "computer won" << endl;
            }
            else
            {
                cout << "user won" << endl;
            }
        }
        if (::user_choice == "paper")
        {
            if (::cp_choice == "rock")
            {
                cout << "user won" << endl;
            }
            else
            {
                cout << "computer won" << endl;
            }
        }
        if (::user_choice == "scissor")
        {
            if (::cp_choice == "rock")
            {
                cout << "computer won" << endl;
            }
            else
            {
                cout << "user won" << endl;
            }
        }
    }
}

int main()
{

    srand(time(NULL));
    char q = 'q';
    char quit;
    /*     while (true)
    {
        cout << "user turn, please choose rock, paper, scissor: ";
        cin >> ::user_choice;
        cout << "computer turn: ";
        computerchoice();
        play_game();
        cout << endl;
    } */

    do
    {
        cout << "user turn, please choose rock, paper, scissor: ";
        cin >> ::user_choice;
        cout << "computer turn: ";
        computerchoice();
        play_game();
        cout << endl;
        cout << "type q to quit the game. Or, p to play again: ";
        cin >> quit;
        cout << endl;

    } while (quit != q);

    return 0;
}