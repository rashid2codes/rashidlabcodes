//SET 6.P 10

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (!source)
    {
        cout << "Error: Unable to open source file." << endl;
        return 0;
    }

    if (!destination)
    {
        cout << "Error: Unable to create destination file." << endl;
        return 0;
    }

    char ch;

    while (source.get(ch))
    {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}