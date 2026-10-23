#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string line;
    cout << "Please input a sentence: ";
    getline(cin, line);

    vector<string> words;
    string word;

    for(char c : line)
    {
        if(c == ' ')
        {
            if(!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        else
        {
            word += c;
        }
    }
    if(!word.empty())
    {
        words.push_back(word);
    }

    cout << "Number of words: " << words.size() << endl;

    cout << "Reversed words: ";
    for(int i = words.size()-1; i >= 0; i--)
    {
        cout << words[i];
        if(i > 0) cout << " ";
    }
    cout << endl;

    return 0;
}
