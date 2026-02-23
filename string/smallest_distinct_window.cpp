#include<iostream>
#include<string>
using namespace std;
int smallest_distinct_window2(string &s){
    vector<int>count(256,0);
    int diff=0;
    for(char c:s){
        if(count[c]==0)
        diff++;
        count[c]++;
    }
    for(int i=0;i<256;i++){
        count[i]=0;
    }
    int first=0,right=0,formed=0;
    int len=s.size();
    while(right<s.size()){
        count[s[right]]++;
        if(count[s[right]]==1)
        formed++;
        while(formed==diff){
            len=min(len,right-first +1);
            count[s[first]]--;
            if(count[s[first]]==0)
            formed--;
            first++;
        }
        right++;
    }
    return len;
}
int smallest_distinct_window(string &s){
    int diff=0,first=0,second=0,len=s.size();
    vector<int>count(256,0);
    while(first<s.size()){
        if(count[s[first]]==0)
        diff++;
        count[s[first]]++;
        first++;
    }
    for(int i=0;i<256;i++){
        count[i]=0;
    }
    first=0;
    
    while(second<s.size()){
        //jab tak diff h
        while(diff&&second<s.size()){
            if(count[s[second]]==0)
            diff--;
            count[s[second]]++;
            second++;
        }
        len=min(len,second-first);  
          
        //make diff 1 after diff=0

        while(diff!=1){
            len=min(len,second-first);
            count[s[first]]--;
            if(count[s[first]]==0)
            diff++;
            first++;
        }
    } 
    return len;
}
int main(){
    string s;
    cout<<"enter the string :";
    cin>>s;
    cout<<smallest_distinct_window2(s);
}