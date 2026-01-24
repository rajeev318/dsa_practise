#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1,first=-1,last=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                first=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            s=mid+1;
            else e=mid-1;

        }
        s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                last=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
            s=mid+1;
            else e=mid-1;

        }
        vector<int>a(2);
        a[0]=first;
        a[1]=last;
        return a;
        
    }
};
int main(){
    

}