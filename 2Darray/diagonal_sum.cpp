#include<iostream>
using namespace std;
// FOR DAIGONAL SUM MATRIX OR 2D ARRAY MUST BE SQUERE(NO. OF ROW SHOULD = NO. OF COL)
vector<int> diagonal_sum(vector<vector<int>>&nums){
    int n=nums.size();
    int first=0,second=0;
    for(int i=0;i<n;i++){            
        first+=nums[i][i];   //for first diagonal 
    }
    // for second diagonal
    int i=0,j=n-1;
    while(j>=0){
        second+=nums[i][j];
        i++,j--;

    }

    return {first, second};
}
int main(){
    vector<vector<int> >nums={
        {1 ,2, 3},
        { 4 ,15, 6 },
        {17, 8, 9}
    };
    vector<int>ans=diagonal_sum(nums);
    cout<<"first daigonal sum:"<<ans[0];
    cout<<"\nsecond daigonal sum:"<<ans[1]<<endl;

}
