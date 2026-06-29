#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guesss;

    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter guess: ";
        cin >> guesss;

        if (guesss > number)
            cout << "Too High!\n";
        else if (guesss < number)
            cout << "Too Low!\n";
        else
            cout << "Congratulations! Correct Guess.\n";

    } while (guesss != number);

    return 0;
}