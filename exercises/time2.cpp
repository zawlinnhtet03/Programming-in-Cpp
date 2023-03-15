#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

// Define a struct to store time information
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Convert a Time value to seconds
int timeInSeconds(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Convert a number of seconds to a Time value
Time secondsToTime(int seconds) {
    Time t;
    t.hours = seconds / 3600;
    t.minutes = (seconds % 3600) / 60;
    t.seconds = seconds % 60;
    return t;
}

// Display a Time value in 12-hour format
void displayTime(const Time& t) {
    string ampm = (t.hours >= 12) ? "PM" : "AM";
    int hours12 = t.hours % 12;
    if (hours12 == 0) {
        hours12 = 12;
    }
    printf("%02d:%02d:%02d %s\n", hours12, t.minutes, t.seconds, ampm.c_str());
}

int main() {
    Time t1, t2, tSum;

    printf("Enter the first time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter the second time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);

    int totalSeconds = timeInSeconds(t1) + timeInSeconds(t2);
    tSum = secondsToTime(totalSeconds);

    printf("The sum of the two times is: ");
    displayTime(tSum);

    return 0;
}
