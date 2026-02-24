
#include<iostream>
#include<string>
using namespace std;
void find(vector<int>&lps,string needle){
    int n=needle.size();
    int first=0,second=1;

    while(second<n){
        if(needle[first]==needle[second]){
            lps[second]=first+1;
            first++,second++;
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
int string_matching(string &haystack,string &needle){
    vector<int>lps(needle.size(),0);
    find(lps,needle);
    int first=0,second=0;
    while(second<needle.size()&&first<haystack.size()){
        if(haystack[first]==needle[second]){
            first++,second++;
        }else{
            if(second==0)
            first++;
            else{
                second=lps[second-1];
            }
        }
        if(second==needle.size())
        return first-second;
    }
    return -1;

}

int main(){
    string s,n;
    cout<<"Enter the string (father):";
    cin>>s;
    cout<<"Enter the string(son):";
    cin>>n;
    cout<<string_matching(s,n);

}