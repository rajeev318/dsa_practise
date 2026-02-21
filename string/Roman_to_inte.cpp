#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int num(char c) {
    static unordered_map<char,int> mp = {
        {'I',1}, {'V',5}, {'X',10},
        {'L',50}, {'C',100},
        {'D',500}, {'M',1000}
    };
    return mp[c];
}

// int num(char c){
//     if(c=='I')
//     return 1;
//     else if(c=='V')
//     return 5;
//     else if(c=='X')
//     return 10;
//     else if(c=='L')
//     return 50;
//     else if(c=='C')
//     return 100;
//     else if(c=='D')
//     return 500;
//     else 
//     return 1000;


    
// }
int roman_to_inte(string roman){
    int index=0;
    int sum=0;
    while(index<roman.size()-1){
        if(num(roman[index])<num(roman[index+1]))
        sum-=num(roman[index]);
        else
        sum+=num(roman[index]);

        index++;
    }
    sum+=num(roman[roman.size()-1]);
    return sum;
}
int main(){
    string roman;
    cout<<"enter the roman no:";
    cin>>roman;
    cout<<roman_to_inte(roman);
}
