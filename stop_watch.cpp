#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>

using namespace std;

void printTime(int hours, int minutes, int seconds) {
    printf("\r%02d:%02d:%02d", hours, minutes, seconds);
    fflush(stdout);
}

int main() {
    int seconds = 0, minutes = 0, hours = 0;
    bool running = false, paused = false;
    char input[10];

    cout << "Welcome to the stopwatch program!" << endl;
    cout << "Type 'start' to begin the stopwatch." << endl;

    while (true) {
        cin.getline(input, 10);

        // Process the user input
        if (strcmp(input, "start") == 0) {
            if (!running) {
                running = true;
                cout << "Stopwatch started." << endl;
            } else {
                cout << "Stopwatch is already running." << endl;
            }
        } else if (strcmp(input, "stop") == 0) {
            if (running) {
                running = false;
                paused = false;
                cout << "Stopwatch is stopped." << endl;
            } else {
                cout << "Stopwatch is not running." << endl;
            }
        } else if (strcmp(input, "pause") == 0) {
            if (running) {
                running = false;
                paused = true;
                cout << "Stopwatch is paused." << endl;
            } else {
                cout << "Stopwatch is not running." << endl;
            }
        } else if (strcmp(input, "resume") == 0) {
            if (paused) {
                running = true;
                paused = false;
                cout << "Stopwatch resumed." << endl;
            } else {
                cout << "Stopwatch is not paused." << endl;
            }
        } else if (strcmp(input, "reset") == 0) {
            running = false;
            paused = false;
            seconds = 0;
            minutes = 0;
            hours = 0;
            printTime(hours, minutes, seconds);
            cout << endl << "Stopwatch reset." << endl;
        } else if (strcmp(input, "exit") == 0) {
            break;
        } else {
            cout << "Invalid input. Type 'start', 'stop', 'pause', 'resume', 'reset', or 'exit'." << endl;
        }

        if (running) {
            printTime(hours, minutes, seconds);
            this_thread::sleep_for(chrono::seconds(1));
            seconds++;
            if (seconds >= 60) {
                seconds = 0;
                minutes++;
            }
            if (minutes >= 60) {
                minutes = 0;
                hours++;
            }
        }
    }

    cout << "Goodbye!" << endl;

    return 0;
}
