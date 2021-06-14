#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_game()
{
    int guesses[250];
    int guess_count = 0;
    int random = rand() % 1000;
    int guess_number;

    while (true)
    {
        cout << "Guess a number: ";
        cin >> guess_number;
        guesses[guess_count] = guess_number;
        guess_count++;

        if (guess_number == random)
        {
            cout << endl;
            cout << "Cool, You won!" << endl;
            cout << endl;
            cout << "Your guesses are " << guess_count << " "
                 << "times in total." << endl;
            cout << endl;
            break;
        }
        else if (guess_number < random)
        {
            cout << "the number is low" << endl;
        }
        else
        {
            cout << "the number is high" << endl;
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    cout << "0. Quit" << endl;
    cout << "1.Play the Game" << endl;
    cin >> choice;
    switch (choice)
    {
    case 0:
        cout << "Bye for now." << endl;
        break;
    case 1:
        cout << "Thank you for choosing the game to play." << endl;
        cout << endl;
        play_game();
    }

    return 0;
}