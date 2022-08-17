#include <iostream> // input-output stream. std:standard library
#include <cmath>
#include <cstdlib>
#include <ctime>
// character out (cout)
//stream (sequence of characters). standard output (console, terminal window)
// << (stream insertion operator: operator to inserting something into the output stream)
using namespace std;

int main() {
    const int minValue= 1;
    const int maxValue= 6;

    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1) + minValue);
    short second = (rand() % (maxValue - minValue + 1) + minValue);
    cout << first << ", " << second;
    return 0;
}

