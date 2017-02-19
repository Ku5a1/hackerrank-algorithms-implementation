#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> h(26);
    string word;
    int maxHeight = -1, index = 0;
    for (int h_i = 0; h_i < 26; h_i++)
    {
        cin >> h[h_i];
    }
    cin >> word;
    if (word.length() <= 10)
    {
        for (int i = 0; i < word.length(); i++)
        {
            index = word[i] - 'a';
            if (h[index] >= 1 && h[index] <= 7 && h[index] > maxHeight)
                maxHeight = h[index];
        }
        cout << word.length() * maxHeight << endl;
    }
    else
    {
        cout << "Word length constraint violated! :(" << endl;
    }
    return 0;
}
