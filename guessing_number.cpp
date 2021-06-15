#include <iostream>
#include <vector> //vector is another kind of array, it's dynamic array intead of statistic array
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/* void play_game()
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
} */

void print_vector(vector<int> data)
{
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
    cout << endl;
    cout << "You guessed " << data.size() << " times in total." << endl;
    cout << "The given random number is " << data[data.size() - 1] << "." << endl;
}

void play_game()
{
    vector<int> guesses;
    int random = rand() % 1000;
    int guess_number;

    while (true)
    {
        cout << "Guess a number: ";
        cin >> guess_number;
        guesses.push_back(guess_number);

        if (guess_number == random)
        {
            cout << endl;
            cout << "Cool, You won!" << endl;
            cout << endl;
            print_vector(guesses);

            cout << endl;
            break;
        }
        else if (guess_number < random)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Too high" << endl;
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