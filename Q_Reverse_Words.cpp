#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool firstWord = true;
    while (ss >> word)
    {
        int left = 0;
        int right = word.length() - 1;
        while (left < right)
        {
            swap(word[left], word[right]);
            left++;
            right--;
        }
        if (firstWord)
        {
            cout << word;
            firstWord = false;
        }
        else
        {
            cout << " " << word;
        }
    }
    return 0;
}