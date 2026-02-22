#include<iostream>
using namespace std;
vector<int> factorial(int num){
    vector<int>ans(1,1);
    while(num>1){
        int carry=0,res;
        for(int i=0;i<ans.size();i++){
            res=ans[i]*num+carry;
            carry=res/10;
            ans[i]=res%10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;

        }
        num--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int t;
    cout<<"enter the test case:";
    cin>>t;
    while(t--){
    int n;
    cout<<"enter the number for factorial:";
    cin>>n;
    vector<int>ans=factorial(n);
    for(auto p:ans)
    cout<<p;
    cout<<endl;
    }
}