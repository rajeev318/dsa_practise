#include<iostream>
using namespace std;
// in this we have to print like wave row
void wave_form(vector<vector<int>>arr){
    int n=arr.size();
    int r=arr[0].size();
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }        
            cout<<endl;

        }
    }
}

int main(){
   vector<vector<int>>nums={{3,6,4,2,},
                            {7,8,11,5},
                            {9,3,12,1},
                            {17,8,5,9}};

   
   wave_form(nums);

}