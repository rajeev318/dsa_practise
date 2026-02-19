#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string shoot_vowel(string &s){
    vector<int>lower(26,0),upper(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='a'||s[i]=='e'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='A'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    string ans;
    for(int i=0;i<26;i++){
        //upper
        while(upper[i]){
            ans+=char('A'+i);
            upper[i]--;
        }
    }
    for(int i=0;i<26;i++){
        //lower
        while(lower[i]){
            ans+=char('a'+i);
            lower[i]--;
        }
    }
    int first=0,second=0;
    while(second<s.size()){
        if(s[second]=='#'){
            s[second]=ans[first];
            first++;
        }
        
        second++;
        

    }
    return s;
}
int main(){
    string name;
    cout<<"Enter the string :";
    cin>>name;
    cout<<shoot_vowel(name);
}