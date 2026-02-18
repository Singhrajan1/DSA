// smallest and the largest the given array.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {12,4,1,-1,5};
//     int size = 5;
//     int Largest_of_theArray = INT_FAST16_MIN;
//     int Smallest_of_theArray = INT_FAST16_MAX;
//     for(int i = 0;i < size - 1;i++){
//         // if(arr[i] < Smallest_of_theArray){
//         //     Smallest_of_theArray = arr[i];
//         // }
//         Smallest_of_theArray = min(arr[i] , Smallest_of_theArray);
//     }
//     for(int i = 0;i < size - 1;i++){
//         // if(arr[i] > Largest_of_theArray){
//         //     Largest_of_theArray = arr[i];
//         // }
//         Largest_of_theArray = max(arr[i] , Largest_of_theArray);
//     }
//     cout << "Largest_of_theArray:" << Largest_of_theArray << endl;
//     cout << "Smallest_of_theArray:" << Smallest_of_theArray << endl;
// }

// index of the smallest and largest.
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12,4,1,-1,5};
    int size = 5;
    int i,j;
    int indexOfMax=0;
    int indexOfMin=0;
    int Largest_of_theArray = INT_FAST16_MIN;
    int Smallest_of_theArray = INT_FAST16_MAX;
    for(i = 0;i < size - 1;i++){
        if(arr[i] < Smallest_of_theArray){
            Smallest_of_theArray = arr[i];
            indexOfMin++;
        }
    }
    for(j = 0;j < size - 1;j++){
        if(arr[j] > Largest_of_theArray){
            Largest_of_theArray = arr[j];
            indexOfMax++;
        }
    }
    cout << "Index of Largest_of_theArray:" << indexOfMax << endl;
    cout << "Index of Smallest_of_theArray:" << indexOfMin << endl;
}