#include<iostream>
using namespace std;
int mthmissing(int arr[], int k, int n) {
    int missingcount = 0, current = 1, i = 0;

    int missingTillEnd = arr[n - 1] - n;

    if (k > missingTillEnd)
        return arr[n - 1] + (k - missingTillEnd);

    while (missingcount < k) {
        if (i < n && arr[i] == current) {
            i++;
        } else {
            missingcount++;
            if (missingcount == k) return current;
        }
        current++;
    }
    return -1;
}

int kthmissing(int arr[],int k,int n){
    int missingTillEnd = arr[n - 1] - n;

    if (k > missingTillEnd)
    return arr[n - 1] + (k - missingTillEnd);
    int s=0,e=n-1,ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            e=mid-1;
        
        }else s=mid+1;
    }
    return ans+k;
}
int main(){
int arr[6]={2,3,4,7,11,12};
int k=8;
cout<<kthmissing(arr,k,6);

}