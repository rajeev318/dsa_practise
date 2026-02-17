#include<iostream>
using namespace std;
// you are given an array which contain 1 to N
// in which one in no. is repeating and one is missing
void misiandrepeating(vector<int>&arr,int n){
    //for decreasing by 1
    for(int i=0;i<n;i++){ 
        arr[i]--;
        
    }
    // use module 
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    //repeating
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            cout<<"repreating no:"<<i+1;
            break;
        }
    }
    // missing
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            cout<<"the missing no.:"<<i+1;
            break;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    misiandrepeating(arr,n);
    return 0;   
}