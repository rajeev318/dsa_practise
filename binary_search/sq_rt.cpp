#include<iostream>
using namespace std;
void show_array(int arr[],int n){
    cout<<"the sorted array is:";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sq_rt(){
    int key,ans;
    cout<<"Enter the key to search: ";
    cin>>key;

    int s=0,e=key-1;
    if(key<2) return key;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid==key/mid){
            
            return mid;
        }
        else if(mid<key/mid){
            ans=mid;
            s=mid+1;

        }
        else
        e=mid-1;
    }
    return ans;

   
}
int main(){
    // int n,arr[100];
    // //make a array;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // cout<<"Enter the elements of array: ";
    // for(int i=0;i<n;i+=1){
    //     cin>>arr[i];

    // }
    while(true){
    cout<<sq_rt()<<endl;
    }
}