#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    int size = sizeof(arr)/sizeof(int);
    cout << "enter the targeted value you want to find:";
    cin >> target;cout<< "ddddd";
    for(int i = 0;i <size - 1;i++){
        if(arr[i] == target){
        cout << "found it at the index: "  << i << endl;
        break;
        }
    }
}