#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void revers1(string &s){
    int i=0,e=s.size()-1;
    while(i<e){
        swap(s[i],s[e]);
        i++,e--;
    }
    cout<<s<<endl;
}

int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    revers1(s); 

}