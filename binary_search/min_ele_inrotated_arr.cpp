#include<iostream>
using namespace std;

int min_rotated(int arr[],int n){
    int ans;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
       
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }
        else{    
            ans=arr[mid];
            e=mid-1;
        }
    }
    return ans;
   
   
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
    cout<<min_rotated(arr,n);
}