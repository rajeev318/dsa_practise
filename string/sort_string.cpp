#include <iostream>
#include<string>
using namespace std;
//sort string
string sort_string(string &s){
    vector<int>alpha(26,0);
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){

        while(alpha[i]){
            ans+=char(i+'a');
            alpha[i]--;
        }
    }
    return ans;
}
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    cout<<sort_string(s);
}