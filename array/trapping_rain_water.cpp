#include<iostream>
#include<algorithm>
using namespace std;
// tc->O(n) but sc->O(n)
int trappingrain(vector<int>nums){
    int n=nums.size(),water=0;
    vector<int>leftmax(n),rightmax(n);    ///extra space 
    
    //prefix max
    leftmax[0]=0;
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],nums[i-1]);
    }
    //suffix max
    rightmax[n-1]=0;
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],nums[i+1]);
    }

    //compare prefix and suffix and
    for(int i=0;i<n;i++){

        
        if(min(rightmax[i],leftmax[i])-nums[i]>0){
            water+=min(rightmax[i],leftmax[i])-nums[i];
        }
    }
    return water;
}

//!!!!!!!!!!!! OPTIMIZED OR TO REDUCE SC->O(1) AND TC->O(N) !!!!!!!!!!!!!!!!!!
int optimized(vector<int>nums){
    int n=nums.size(),water=0;
    int start=0,end=n-1;
    int leftmax=0,rightmax=0;
    while(start<end){
        if(nums[start]<nums[end]){
            if(leftmax<nums[start]){
                leftmax=nums[start];
                start++;
            }else {
                water+=leftmax-nums[start];
                start++;
            }
        }
        else{
            if(nums[end]>rightmax){
                rightmax=nums[end];
                end--;
            }
            else{
                water+=rightmax-nums[end];
                end--;
            }
        }
    }
    return water;
}
int main(){
    vector<int>arr={4,2,0,5,2,6,2,3};
    cout<<trappingrain(arr)<<endl;
    cout<<optimized(arr)<<endl;
}