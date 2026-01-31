#include<iostream>
using namespace std;
//print 2d array
void print2d(vector<vector<int> >&arr, int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//CREATION 2D ARRAY
void two_Darray(int row, int col){
    vector<vector<int> >nums(row,vector<int>(col));
    cout<<"enter the elements of 2d array:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>nums[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    print2d(nums,row,col);
}


int main(){
int row,col;
cout<<"enter the number of row :";
cin>>row;
cout<<"enter the number of col:";
cin>>col;
two_Darray(row,col);

}