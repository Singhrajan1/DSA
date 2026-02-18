#include<iostream>
using namespace std;
int main(){
    int num[5] = {1,2,5,3,4};
    int size = sizeof(num)/sizeof(int);
    int start = 0;
    int end = size - 1;
    for(int i = 0;i < size;i++){
        if(start <= end){
        swap<int>(num[start],num[end]);
        start++;
        end--;
        }
    }
    for(int i =0;i<size;i++){
        cout<<num[i];
    }
}