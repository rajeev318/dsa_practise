#include <iostream>
#include <string>
using namespace std;
bool check_pangram(string &s)
{
    vector<bool> alpha(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        alpha[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
            return false;
    }
    return true;
}
int main()
{
    string sentance;
    // sentance should be small letters
    cout << "Enter the sentance for check pangram:";
    getline(cin, sentance);
    cout<<check_pangram(sentance)<<endl;
}