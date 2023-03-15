#include <iostream>

using namespace std;

class Counter {
    private:
        unsigned int count;
    
    public:
        Counter(): count(0)
        {}

        Counter(int c) {
            count = c;
        }

        unsigned int getCount() {
            return count;
        }

        Counter operator++() {
            return Counter(++count);
        }

        Counter operator++(int) {
            return Counter(count++);
        }
};

int main() {
    Counter c1, c2;
    cout << "\nc1 = " << c1.getCount();
    cout << "\nc2 = " << c2.getCount();
    ++c1;

    c2 = ++c1;
    cout << "\nc1 = " << c1.getCount();
    cout << "\nc2 = " << c2.getCount() << endl;

    c2 = c1++;
    cout << "\nc1 = " << c1.getCount();
    cout << "\nc2 = " << c2.getCount() << endl;
    return 0;
}