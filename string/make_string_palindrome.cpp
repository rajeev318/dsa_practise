#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void palindrome(string &t){

    string temp = t;
    reverse(temp.begin(), temp.end());

    string combined = t + "$" + temp;

    int n = combined.size();
    vector<int> lps(n, 0);

    int first = 0, second = 1;

    while(second < n){
        if(combined[first] == combined[second]){
            lps[second] = first + 1;
            first++;
            second++;
        }
        else{
            if(first == 0){
                lps[second] = 0;
                second++;
            }
            else{
                first = lps[first - 1];
            }
        }
    }

    int value = lps[n - 1];

    for(int i = 0; i < t.size() - value; i++){
        cout << temp[i];
    }

    cout << t;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    palindrome(s);
}