#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// void print(vector<int> &s, int w)
// {
//     if (w == 0){
//         for (int i = 0; i < s.size(); i++){
//             if (s[i] > 0){
//                 cout << char(i + 'a') << " ";
//             }
//         }
//     }
//     else{
//         for (int i = 0; i < s.size(); i++){
//             if (s[i] > 0){
//                 cout << char(i + 'A') << " ";
//             }
//         }
//     }
// }
int longest_palindrome(string s)
{
    vector<int> lower(26, 0), upper(26, 0);
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a'){
            lower[s[i] - 'a']++;
        }
        else{
            upper[s[i] - 'A']++;
        }
    }
    // print(lower,0);
    // print(upper,1);
    int count = 0;
    bool odd = 0;
    for (int i = 0; i < 26; i++)
    {
        // lower
        if (lower[i] % 2 == 0){
            count += lower[i];
        }
        else{
            count += lower[i] - 1;
            odd = 1;
        }
        // upper
        if (upper[i] % 2 == 0){
            count += upper[i];
        }
        else{
            count += upper[i] - 1;
            odd = 1;
        }
    }
    return count + odd;
}

int main()
{
    //longest palindrome abccccdd and we have to ans 7 like dccaccd longest palindrome that can make from given string
    string name;
    cout << "enter the string:";
    cin >> name;
    cout << longest_palindrome(name);
}