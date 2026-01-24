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
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);

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
    selection_sort(arr,n);
}