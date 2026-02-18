#include<iostream>
using namespace std;
void operationOnArray(int arr[],int size){
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++){
        sum=sum + arr[i];
    }
    for(int i=0;i<size;i++){
        product=product * arr[i];
    }
    cout<<"sum is: " << sum<<endl;
    cout<<"product is: "<< product<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    operationOnArray(arr,size);
    return 0;
}