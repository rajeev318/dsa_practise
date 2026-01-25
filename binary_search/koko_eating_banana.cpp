#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
// in this question your given time 
//and we have to find that how many banana should koko eat all given banana 
// in given time
int koko_eating(vector<int>nums,int h)// h is the given time
{
    int start=0,end=0,ans,sum,mid;
    
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        end=max(end,nums[i]);
    }
    start=sum/h;
    if(!start)
    start=1;//to remove if start 0
    while(start<=end){
        mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0;i<nums.size();i++){
            total_time+=nums[i]/mid;
            if(nums[i]%mid)
            total_time++;
        
        }
        if(total_time>h){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }

    }
    return ans;
}

int main(){
    vector<int>arr={3,6,11,7};
    int h=8;
    cout<<koko_eating(arr,h)<<endl;

}