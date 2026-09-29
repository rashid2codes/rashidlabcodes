//SET 6.P9
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("article.txt");

    if (!file)
    {
        cout << "Error: Unable to open file." << endl;
        return 0;
    }

    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while (getline(file, line))
    {
        lines++;

        
        characters += line.length();

      
        string word = "";
        for (char ch : line)
        {
            if (ch != ' ')
            {
                word += ch;
            }
            else
            {
                if (word != "")
                {
                    words++;
                    word = "";
                }
            }
        }

        if (word != "")
        {
            words++;
        }
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}