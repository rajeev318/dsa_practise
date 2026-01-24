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
void bubble_sort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                swapped=1;
            }    
        }
        if(!swapped)
        break;
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
    bubble_sort(arr,n);
}