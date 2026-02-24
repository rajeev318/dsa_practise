#include<iostream>
#include<string>
using namespace std;
void find(vector<int>lps,string &f){
    int first=0,second=1;
    while(second<f.size()){
        if(f[first]==f[second]){
            lps[second]=first+1;

        }
        else{
            if(first==0){
                lps[second]=0;
                second++;
            }
            else{
                first=lps[first-1];
            }
        }
    }
}
int circular_pattern(string &s,string &f){
    s+=s;
    vector<int>lps(f.size(),0);
    find(lps,f);
    int first=0,second=0;
    while(first<s.size()&&second<f.size()){
        if(s[first]==f[second]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
        if(second==f.size())
        return 1;
    }
    return -1;
}
int main(){
    string s,f;
    cout<<"enter the string(main);";
    cin>>s;
    cout<<"enter the string(find):";
    cin>>f;
    cout<<circular_pattern(s,f);
}