#include<iostream>
#include<string>
using namespace std;
string sort_sentance(string &s){
    int index=0;
    vector<string>ans(10);
    string temp;
    int count=0;
    while(index<s.size()){
        if(s[index]==' '){
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }
        else{
            temp+=s[index];

        }
        index++;
    }
    int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;    

    for(int i=1;i<=count;i++){
        temp+=ans[i];
        temp+=' ';
    }    
    temp.pop_back();

    return temp; 
    
}

int main(){
    // in this we have to sort the sentance like 
    //"is2 sentebce4 this1 a3" we have to sort this sentance acc. to given no
    //like "this is a sentance", this is sorted sentance 
    string s;
    cout<<"enter the sentance:";
    getline(cin,s);
    cout<<sort_sentance(s);
}