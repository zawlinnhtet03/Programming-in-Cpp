#include <fstream> //for file I/O

using namespace std;

int main()
{
    ofstream outfile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/TEST.TXT"); 
    
    outfile << "I fear thee, ancient Mariner!\n";
    outfile << "I fear thy skinny hand\n";
    outfile << "And thou art long, and lank, and brown,\n";
    outfile << "As is the ribbed sea sand.\n";
    return 0;
}