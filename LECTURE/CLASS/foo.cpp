#include <iostream>

using namespace std;

class foo {
    private:
        static int count;

    public:
        foo() {
            count++;
        }

        int getCount() {
            return count;
        }
};

int foo::count = 0;

int main() {
    foo f1, f2, f3;
    cout << "Count is: " << f1.getCount() << endl;
    cout << "Count is: " << f2.getCount() << endl;
    cout << "Count is: " << f3.getCount() << endl;

    return 0;
}