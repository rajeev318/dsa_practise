#include<iostream>
using namespace std;
void show_array(int arr[],int n){
    cout<<"the sorted array is:";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap( int &n,int &m ){
    int temp;
    temp=n;
    n=m;
    m=temp;
}
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
       
        
    }
    show_array(arr,n);
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
    insertion_sort(arr,n);
}