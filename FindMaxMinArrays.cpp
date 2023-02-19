#include<iostream>
#include<limits.h>
using namespace std;
int  Mini(int arr[3][3],int r,int c ){
    int mini=INT_MAX;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
         
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
        return mini; 
}
int main(){
    int r=3,c=3;
   // int arr[3][3];
     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
   cout<< Mini(arr,r,c);
}