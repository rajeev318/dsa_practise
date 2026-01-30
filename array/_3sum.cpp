#include<iostream>
using namespace std;
// In this question we have to find sum of three digit which equal to given integer
//BRUTE FORCE APPROACH WITH TC->O(N^3) AND SC->O(1)
vector<int> _3sum(vector<int>nums,int X){
    int n=nums.size();
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==X){
                    return {i,j,k};
                }
            }
        }
    }
 return {-1,-1,-1};
}
//!!!!!!!!!OPTIMIZED VERSION (USE OF BINARY SEARCH)!!!!!!!!
//!!! here tc-> O(n^2logn) sc->O(1)
vector<int> threesum(vector<int>nums,int X){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-1;j++){
            int target=X-nums[i]-nums[j];
            int s=j+1,e=n-1;
            while(s<e){
                int mid=s+(e-s)/2;
                if(nums[mid]==target)
                return {i,j,mid};
                else if(nums[mid]>target)
                e=mid-1;
                else s=mid+1;
            }
        }
    }
    return {-1,-1,-1};
    
}
//!!!!!!!! MORE OPTIMISED (USING TWO POINTER)!!!!!!!
//where tc->O(n^2) sc->O(1)
vector<int> sum3(vector<int>arr,int k){

    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int target=k-arr[i];
        int s=i+1,e=n-1;
        while(s<e){
            if(arr[s]+arr[e]==target)
            return {i,s,e};
            else if(arr[s]+arr[e]>target){
                e--;
            }
            else s++;
        }
    }
    return {-1,-1,-1};
}
int main(){
    vector<int>arr={1,4,45,6,10,8};
    int X=13;
    vector<int>ans=sum3(arr,X);
    for(auto c:ans)cout<<c<<" ";
    cout<<endl;

}