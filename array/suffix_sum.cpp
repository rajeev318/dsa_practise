#include<iostream>
using namespace std;
// In suffix sum, we are given an array
// and we have to create a new array where
// In suffix sum, each index stores the sum of elements
// from the end of the array up to that index.
// This preprocessing helps us to answer
// range sum queries from right to left efficiently.

//OR WE CAN SAY
//// Suffix sum is a preprocessing technique that
// stores cumulative sums from right to left.
//EX-[6,4,5,-3,2,8] suffix_sum is [22,16,12,7,10,8]

vector<int> suffix_sum(vector<int>nums){
    int n=nums.size();              //to find size of array
    vector<int>suffix(n);           //to store suffix sum
    suffix[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=nums[i]+suffix[i+1];
    }
    return suffix;
}
int main(){
    vector<int>arr={6,4,5,-3,2,8};
    vector<int>ans=suffix_sum(arr); //to store return vector from function
    for(auto x:ans){
        cout<<x<<" ";

    }
    cout<<endl;
}
