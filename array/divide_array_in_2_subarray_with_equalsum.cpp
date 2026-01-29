#include<iostream>
using namespace std;
// You are given an array.
// Check whether it is possible to divide the array at 
// some index into two subarrays such that the sum of both subarrays is equal.
vector<int> candivide(vector<int>nums){
    int n=nums.size();
    //for total sum of array

    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=nums[i];
    }
    if(total_sum%2==1)          //if the total sum is odd then not possible to divide in two equal subarray
    return {-1,-1};
    // sub prefix sum from total sum and check is equal to prefix sum
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=nums[i];
        if(prefix==total_sum-prefix)
        return {i,prefix};
    }
    return {-1,-1};

}
int main(){
    vector<int>arr={3,24,6,-2,5,8,20,-10,8,26};
    vector<int> ans=candivide(arr);
    cout<<"index:"<<ans[0]<<" "<<endl;
    cout<<"the array divide with equalsum is:"<<ans[1]<<endl;

}