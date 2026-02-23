#include<iostream>
#include<string>
using namespace std;
int longest_prefix_suffix(string &s){
    int n=s.size();
    if(n == 0) return 0;
    vector<int>lps(n,0);
    int pre=0,suff=1;
    while(suff<n){
        if(s[pre]==s[suff]){
            lps[suff]=pre+1;
            pre++,suff++;
        }
        else{
            if(pre==0){
                lps[suff]=0;
                suff++;
            }else{
                pre=lps[pre-1];
            }
        }
    }
    return lps[s.size()-1];
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    cout<<longest_prefix_suffix(s);
}