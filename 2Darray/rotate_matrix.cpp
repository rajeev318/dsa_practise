#include<iostream>
using namespace std;
void print(vector<vector<int>>&nums){
    int row=nums.size();
    int col=nums[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }    
    cout<<endl;
}
void reverse_row(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        int s=0,e=col-1;
        while(s<=e){
            swap(arr[i][s],arr[i][e]);
            s++,e--;
        }
    }

}
void transpos(vector<vector<int>> &nums)
{
    int row = nums.size();
    int col = nums[0].size();
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(nums[i][j],nums[j][i]);
        }
    }
}
void rotate_clockwise90(vector<vector<int>>nums){
    transpos(nums);
    reverse_row(nums);
    print(nums);

}
void rotate_anticlockwise90(vector<vector<int>>nums){
    reverse_row(nums);    
    transpos(nums);

    print(nums);
}
void rotate_180(vector<vector<int>>nums){
    rotate_clockwise90(nums);
    rotate_clockwise90(nums);
}
int main(){

    vector<vector<int> >nums={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotate_clockwise90(nums);cout<<endl;
    rotate_anticlockwise90(nums);
}