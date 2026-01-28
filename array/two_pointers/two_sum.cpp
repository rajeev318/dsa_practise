#include<iostream>
#include<vector>
using namespace std;
// In the question we ve given a target value 
//we have to find digit in array whose sum is equal to target
//brute force {tc->O(n^2)}
//also done by binary search {tc->O(nlogn)}
// REQUERMENT FOR TWO POINTER SORTED ARRAY FOR SOLVE BY TWO POINTER
vector<int> two_sum(vector<int>nums,int k)
{
    int n=nums.size();
    int start=0,end=n-1;
    while(start<end){
        if(nums[start]+nums[end]==k){
            return {start,end};
        }
        else if(nums[start]+nums[end]<k){
            start++;
        }
        else
        end--;
    }
    return {-1,-1};
}
int main(){
vector<int>arr={2,7,11,15,17};
int k=22;//target
vector<int>ans=two_sum(arr,k);
for(auto c:ans){
    cout<<"pos(" <<c<<") -> ";
    cout<<arr[c];
    cout<<endl;
}
cout<<endl;

}