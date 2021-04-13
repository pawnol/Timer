/*
Timer
Pawelski
4/13/2021
This program implements a simple timer. The user enters
the number of minutes the timer should be set to and
counts down.
*/

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::this_thread; // to use sleep_for

int main()
{
    int sec, min;
    cout << "How many minutes do you need to wait? ";
    cin >> min;
    sec = min * 60;
    for (int i = sec; i > 0; i--)
    {
        cout << i << " seconds remain.\n";
        sleep_for(1s);
    }
    cout << "Done!\a\n";
    return 0;
}
