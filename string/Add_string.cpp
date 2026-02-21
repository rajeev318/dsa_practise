#include<iostream>
#include<string>
using namespace std;
// we have to add no : like 298446+278
//num1>=num2
string Add_string(string num1,string num2){
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    string ans;
    int sum,carry=0;
    while(index2>=0){
        sum =num1[index1]-'0'+num2[index2]-'0'+carry;
        carry=sum/10;
        ans+=char ('0'+sum%10);
        index1--,index2--;
        
    }
    while(index1>=0){
        sum=num1[index1]-'0'+carry;
        carry=sum/10;
        ans+=char('0'+sum%10);
        index1--;
    }
    if(carry)
    ans+='1';

    reverse(ans.begin(),ans.end());
    return ans;

}
int main(){

    string num1,num2;
    cout<<"Enter the (num1>=num2)"<<endl;
    cout<<"Enter the number1:";
    cin>>num1;
    cout<<"Enter the number2:";
    cin>>num2;
    cout<<Add_string(num1,num2)<<endl;
}