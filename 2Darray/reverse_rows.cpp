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
int main(){

    vector<vector<int> >nums={
        {11,2,63},
        {24,15,56},
        {17,58,89}
    };
    reverse_row(nums);
    print(nums);
}