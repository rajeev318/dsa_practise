#include<iostream>
using namespace std;
//in the ques. we have given a difference of pair 
//[2,3,5,10,50,80] given diff =45
//we have to return pair or index {50,5}
//if array not sorted first sort 
//because here we do this by two pointer
vector<int> pair_diff(vector<int>nums,int diff){
    int n=nums.size();
    int start=0,end=1;
    while(start<end){
        if(nums[end]-nums[start]==diff)
        return {end,start};
        else if(nums[end]-nums[start]<diff)
        end++;
        else start++;
    }
    return{-1,-1};
}
int main(){
vector<int>arr={2,3,5,10,50,80};
int diff=45;
vector<int>ans=pair_diff(arr,diff);
cout << "Indices: " << ans[0] << " " << ans[1] << endl;
cout << "Values: " << arr[ans[0]] << " " << arr[ans[1]] << endl;
}