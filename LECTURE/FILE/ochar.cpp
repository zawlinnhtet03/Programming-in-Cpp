#include <fstream> //for file functions
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Time is a great teacher, but unfortunately "
    "it kills all its pupils. Berlioz";

    ofstream outfile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/TEST2.TXT"); //create file for output

    
    for(int j = 0; j < str.size(); j++) //for each character,
    {
        outfile.put(str[j]);
    } //write it to file
    
    cout << "File written\n";

    outfile.close();

    return 0;
}