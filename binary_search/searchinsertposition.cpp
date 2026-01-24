#include<iostream>
using namespace std;
void show_array(int arr[],int n){
    cout<<"the sorted array is:";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int search_insert_position(int arr[],int n){
    int key,index=n;
    cout<<"Enter the key to search: ";
    cin>>key;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;

        }
        else{
            index=mid;
            e=mid-1;
        }     
    }
    return index;

   
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
    
    cout<<search_insert_position(arr,n)<<endl;
    
}