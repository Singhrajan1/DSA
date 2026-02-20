#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,1,3,2,2};
    int unique=0;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
       unique=unique^arr[i]; 
    }
    cout<<unique<<endl;
}
//rajan
