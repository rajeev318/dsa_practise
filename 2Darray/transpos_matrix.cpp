#include <iostream>
using namespace std;
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
int main()
{
    vector<vector<int>> nums = {{3, 6, 4, 2},
                                {7, 8, 11, 5},
                                {9, 3, 12, 1},
                                {17, 8, 5, 9}};
        transpos(nums);
        int row = nums.size();
        int col = nums[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<nums[i][j]<<" ";
            }
            cout<<endl;
        }              
        cout<<endl;         

}