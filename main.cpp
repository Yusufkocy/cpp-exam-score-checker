#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter a score: ";
    cin >> score;

    if (score >= 50) {
        cout << "You passed the exam. Well done!\n";
    }
    else {
        cout << "You were not successful in the exam. ";
        cout << "Your score is " << score << "\n";
    }

    return 0;
}
