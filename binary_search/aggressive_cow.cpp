#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//we have to assign stalls to k cow
// minimum distance between any two of them is maximum possible
int aggressive_cow(vector<int>arr,int k ,int n){//k is numbers of cow & n is size of array
    //at first we have t sort the array 
    sort(arr.begin(),arr.end());
    int start=1,end=arr[n-1]- arr[0];
    int mid,ans ;
    while(start<=end){
        mid=start+(end-start)/2;
        int count=1,pos=arr[0];
        for(int i=1;i<n;i++){
            if(pos+mid<=arr[i])
            {
                count++;
                pos=arr[i];
            }
        }
        if(count<k){
            end=mid-1;

        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
    
}
int main(){
    vector<int>nums={1,2,4,8,9};
    int k=3;
    int n=nums.size();
    cout<<aggressive_cow(nums,k,n);

}