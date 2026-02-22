#include<iostream>
#include<string>
using namespace std;
void longest_sub_string(string &s){
    int n=s.size();
    vector<bool>count(256,0);
    int first=0,second=0,len=0;
    while(second<n){
        while(count[s[second]]){
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;
        len=max(len,second-first+1);
        second++;
        
    }
    for(int i=first;i<=second;i++){
        cout<<s[i];
    }
    cout<<len;
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    longest_sub_string(s);

}