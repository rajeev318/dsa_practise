#include<iostream>
using namespace std;
void show_array(int arr[],int n){
    cout<<"the array is:";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" "<<endl;
    }
}
void rotate(int arr[],int n){
    int N;
    cout<<"Enter the number of rotation clockwise:";
    cin>>N;
    N%=n;
    while(N){
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        N--;
    }
    cout<<"The rotated array: ";
    show_array(arr,n);
}
void search_min(int arr[],int n){
    int ans=INT_MAX;
    for(int i=0;i<n;i+=1){
        if(arr[i]<ans){
            ans=arr[i];
        }

    }
    cout<<ans<<endl;
}
void search_max(int arr[],int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i+=1){
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans;
    
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
    // cout<<"the array is:";
    // for(int i=0;i<n;i+=1){
    //     cout<<arr[i]<<" "<<endl;
    // }
    rotate(arr,n);
}