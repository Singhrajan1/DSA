// #include<iostream>
// using namespace std;
// int main(){
//     int maxSum=INT16_MIN;
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     for(int start=0;start<size;start++){
//         int sum=0;
//         for(int end=start;end<size;end++){
//             sum = sum+arr[end];
//             maxSum=max(sum,maxSum);
//         }
//     }
//     cout<<maxSum;
// }

/* kadane's algorithm
according to kadane's algo if the sum becomes negative reset it*/


#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int maxSum=INT16_MIN;
    int arr[10]={1,2,3,4,5};
    int size=10;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        maxSum=max(sum,maxSum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxSum;
}

