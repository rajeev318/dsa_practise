#include <iostream>
using namespace std;
int book_allocation(int arr[],int k, int n)
{
    int sum = 0, maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }
    int start = maxi, end = sum, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int page_sum = 0, student_count = 1;
        for (int i = 0; i < n; i++)
        {
            page_sum += arr[i];
            if (page_sum > mid)
            {
                student_count++;
                page_sum = arr[i];
            }
        }
        if (student_count <= k){
            ans=mid;
            end=mid-1;

        }
        else
        start=mid+1;
    }
    return ans;
}
int main()
{
    int arr[]={3,2,2,4,1,4};
    int k=3;
    cout<<book_allocation(arr,k,6)<<endl;


}