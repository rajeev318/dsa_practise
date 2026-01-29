#include<iostream>
using namespace std;
// This function finds the maximum difference between two elements
// such that the larger element appears after the smaller element.
// It tracks the minimum value seen so far and updates the maximum
// difference in a single traversal.
//ex [9,5,8,12,2,3,7,4] the max diff is 12-5 =7


/// bruteforce methode where time complexity is O(n^2) sc->O(1)
int bruteforce(vector<int>nums){
    int n=nums.size();
    if(n<2) return 0;
    int ans=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans=max(ans,nums[j]-nums[i]);
        }
    }
    return ans;
}
//optimization where time comlexity is O(n) but sc->O(n)
// here we are using suffix method
int optimsed(vector<int>nums){
    int n=nums.size(),ans=0;
    if(n<2) return 0;
    vector<int>suffix(n);
    suffix[n-1]=nums[n-1];
    //for larger element till that index
    for(int i=n-2;i>=0;i--){
        suffix[i]=max(suffix[i+1],nums[i]);
    }
    for(int i=0;i<n;i++){
        ans=max(ans,suffix[i]-nums[i]);
    }
    return ans;
}
//more optimised version to reduce sc to O(1) and tc->O(n);
int moroptimised(vector<int>nums){
    int n=nums.size(),ans=0;
    if(n<2) return 0;
    int suffix=nums[n-1];
    for(int i=n-2;i>=0;i--){
        ans=max(ans,suffix-nums[i]);
        suffix=max(suffix,nums[i]);
    }
    return ans;
}

int main(){
    vector<int>arr={9,8,7,6};

    cout<<bruteforce(arr)<<endl;
    cout<<moroptimised(arr)<<endl;
}