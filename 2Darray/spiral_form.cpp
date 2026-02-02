#include <iostream>
using namespace std;
void spiral_form(vector<vector<int>> nums)
{
    int row = nums.size();
    int col = nums[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << nums[top][i]<<" ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << nums[i][right]<<" ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << nums[bottom][i]<<" ";
            }
        }
        bottom--;
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << nums[i][left]<<" ";
            }
        }
        left++;
    }
}
int main()
{
    vector<vector<int>> nums = {{3, 6, 4, 2},
                                {7, 8, 11, 5},
                                {9, 3, 12, 1},
                                {17, 8, 5, 9}};
    spiral_form(nums);
}