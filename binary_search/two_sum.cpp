#include<iostream>
using namespace std;
// TWO SUM
//we have given target value 
//we have to find two digit in array whose sum is equal to target
//her we solve this question by binary search method
//tc-> by binary search is O(nlogn)

vector<int> two_sum(vector<int>nums,int k){
    int n=nums.size();
    int start,end,i=0;
    while(i<n){
        int target=k-nums[i];
        
        start=i+1;
        end=n-1;
        while(start<=end){

            int mid=start+(end-start)/2;
            if(nums[mid]==target){
               return {i,mid};
            }
            else if(nums[mid]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        i++;
    }
    return {-1,-1};
}
int main(){
    vector<int>arr={2,7,11,15,27};
    int target=26;
    vector<int>ans=two_sum(arr,target);
    cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    cout << "Values: " << arr[ans[0]] << " " << arr[ans[1]] << endl;
}