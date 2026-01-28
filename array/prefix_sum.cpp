#include<iostream>
using namespace std;
// In prefix sum, we are given an array
// and we have to create a new array where
// each index stores the sum of all elements from index 0 to that index.
// This preprocessing helps us to answer
// range sum queries in O(1) time.

vector<int> prefix_sum(vector<int>nums){
    int n=nums.size();           // to find size of array
    vector<int>prefix(n);         //to store prefix sum
    prefix[0]=nums[0];
    for(int i=1;i<n;i++){
        prefix[i]=nums[i]+prefix[i-1];

    }
    return prefix;
}
int main(){
    vector<int>arr={6,4,5,-3,2,8};
    vector<int>ans=prefix_sum(arr);
    for(auto c:ans){
        cout<<c<<" ";
    }
    cout<<endl;

}