#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    srand(time(0));

    int sixSided = rand() % 6 + 1;
    int tenSided = rand() % 10 + 1;
    int twentySided = rand() % 20 + 1;
    int onehundredSided = rand() % 100 + 1;

    cout << "6-sided dice: " << sixSided << endl;
    cout << "10-sided dice: " << tenSided << endl;

    cout << "20-sided dice: ";

    if (twentySided == 1)
    {
        setColor(12);
        cout << twentySided << " - Critical Failure";
        setColor(7);
    }
    else if (twentySided == 20)
    {
        setColor(10);
        cout << twentySided << " - Critical Success";
        setColor(7);
    }
    else
    {
        cout << twentySided;
    }

    cout << endl;

    cout << "100-sided dice: " << onehundredSided << endl;

}