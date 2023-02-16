#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime() const {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    Time addTime(const Time& t) const {
        int h = hours + t.hours;
        int m = minutes + t.minutes;
        int s = seconds + t.seconds;

        if (s >= 60) {
            m += s / 60;
            s %= 60;
        }

        if (m >= 60) {
            h += m / 60;
            m %= 60;
        }

        return Time(h, m, s);
    }
};

int main() {
    Time t1;
    t1.displayTime(); // 00:00:00

    Time t2(5, 30, 45);
    t2.displayTime(); // 05:30:45

    cout << "Hours: " << t2.getHours() << endl; // 5
    cout << "Minutes: " << t2.getMinutes() << endl; // 30
    cout << "Seconds: " << t2.getSeconds() << endl; // 45

    Time t3 = t1.addTime(t2);
    t3.displayTime(); // 05:30:45

    return 0;
}
