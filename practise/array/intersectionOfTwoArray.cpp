#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int size){
    int new_arr[size*2];
    for(int i=0;i<size;i++){
        if(arr1[i]!=arr2[i]){
            new_arr[i]=arr1[i];
            break;
        }
    }
    for(int i=0;i<size;i++){
        cout<<new_arr[i];
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,4,5,6,7};
    int size=5;
    intersection(arr1,arr2,size);
}