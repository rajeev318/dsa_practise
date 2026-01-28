#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// In this question your given array like [1,0,1,0,1,0] random 
//you have to arrange the array like [0,0,0,1,1,1]
//there are multiple way like (i)sorting{tc-> o(n^2)}
// (ii)by sort function {tc->O(nlogn)}
//(iii)one way is count 0 and 1 & arrange them in order {tc->O(n)}
//(iv) Here we are do doing by two pointer {tc->O(n)}


vector<int> segregate_0_1(vector<int>&nums)
{
    int n=nums.size();
    int start=0,end=n-1;
    while(start<end){
        if(nums[start]==0){
            start++;
        }
        else{
            if(nums[end]==0){
                swap(nums[start],nums[end]);
                start++,end--;
            }
            else
            end--;
        }
    }
    return nums;
}
int main(){
    vector<int>arr={1,0,1,1,1,0,1,1,0};
    segregate_0_1(arr);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

}