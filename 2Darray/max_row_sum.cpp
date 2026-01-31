#include<iostream>
using namespace std;
/// we have to print row index of max sum
int max_sum(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
    int sum=INT_MIN,index;
    for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++){
            total+=arr[i][j];
        }
        if(sum<total){
            sum=total;
            index=i;
        }
    }
    return index;
}

int main(){
    int row,col;
    cout<<"enter the number of row:";
    cin>>row;
    cout<<"enter the number of col:";
    cin>>col;
    // creating 2d vector
    vector<vector<int>>nums(row,vector<int>(col));
    cout<<"enter the elements of arr: "
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>nums[i][j];
        }
        
    }
    cout<<max_sum(nums);
}