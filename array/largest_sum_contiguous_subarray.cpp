#include<iostream>
using namespace std;
// This function finds the maximum sum contiguous subarray
// using Kadane’s Algorithm and also prints that subarray.
// If the running sum becomes negative, it is reset because
// a negative sum cannot contribute to a maximum subarray.

vector<int> kadane(vector<int>nums){
    int n=nums.size();
    int maxi=INT_MIN;
    int prefix=0;
    int start=0,end=0,temstart=0;
    for(int i=0;i<n;i++){
        prefix+=nums[i];
        if(prefix>maxi){
            maxi=prefix;
            start=temstart;
            end=i;
        }
        if(prefix<0){
            prefix=0;
            temstart=i+1;
        }

    }
    return {start,end,maxi};
}
int main(){
    vector<int>arr={-3,-2,-4,5};
    vector<int> ans=kadane(arr);
    cout<<"start_index :"<<ans[0]<<endl;
    cout<<"end_index :"<<ans[1]<<endl;
    cout<<"largest_sum :"<<ans[2]<<endl;
}