#include<iostream>
using namespace std;
void show_array(int arr[],int n){
    cout<<"the sorted array is:";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void binary_search(int arr[],int n){
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            cout<<"the key is at "<<mid;
            return;
        }
        else if(arr[mid]<key){
            s=mid+1;

        }
        else
        e=mid-1;
    }

   
}
int main(){
    int n,arr[100];
    //make a array;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i+=1){
        cin>>arr[i];

    }
    binary_search(arr,n);
}