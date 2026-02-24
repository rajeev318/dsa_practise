#include<iostream>
#include<string>
using namespace std;
void find(vector<int>&lps,string &temp){
    int first=0,second=1;
    while(second<temp.size()){
        if(temp[first]==temp[second]){
            lps[second]=first+1;
            first++,second++;
        }
        else{
            if(first==0){
                lps[second]=0;
                second++;
            }
            else
            first=lps[first-1];
        }
    }
}
bool kmp_match(string &main,string &temp){
    vector<int>lps(temp.size(),0);
    find(lps,temp);
    int first=0,second=0;
    while(first<main.size()&&second<temp.size()){
        if(temp[second]==main[first])
        first++,second++;
        else{
            if(second==0)
            first++;
            else{
                second=lps[second-1];
            }
        }
        if(second==temp.size())
        return 1;
    }
    return -1;

}
int repeat_string(string &main,string &torepeat){
    if(main==torepeat)
    return 1;
    string temp=torepeat;
    int repeat=1;
    while(temp.size()<=main.size()){
        temp+=torepeat;
        repeat++;
    }
    if(kmp_match(main,temp)==1)
    return repeat;
    if(kmp_match(main,temp+=torepeat)==1)
    return repeat+1;
    return -1;
}
int main(){
    string father,son;
    cout<<"Enter the string(main):";
    cin>>father;
    cout<<"Enter the string(to repeat):";
    cin>>son;
    cout<<repeat_string(father,son);
}