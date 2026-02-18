#include<iostream>
using namespace std;
void swap_min_max(int arr[],int size){
    int smallest=0;
    int largest=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[largest]){
            largest=i;
        }
        if(arr[i]<arr[smallest]){
            smallest=i;
        }
    }
    swap(arr[largest],arr[smallest]);
}
int main(){
    int arr[5]={23,54,21,76,1};
    int size=sizeof(arr)/sizeof(int);
    swap_min_max(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}