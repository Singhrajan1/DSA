// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     vector<int> name={1,2,1,3,2,1,1,3,2,4,1,1,1};
//     int most_appeared_number=0;
//     int size_of_vector=name.size()/2;
//     int no_of_appearance=0;
//     for(int i=0;i<name.size();i++){
//         for(int j=0;j<name.size();j++){
//             if(name[i]==name[j]){
//                 no_of_appearance++;
//             }
//         }
//         if(no_of_appearance>=size_of_vector){
//             break;
//         }
//     }
//     cout<<no_of_appearance;
// }

// #include<iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;
// int majorityElement(vector<int> arr,int size){
//     // for(int value : arr){
//     //     int numberOfApperance=0;
//     //     for(int element : arr){
//     //         if(element==value){
//     //             numberOfApperance++;
//     //         }
//     //     }
//     //     if(numberOfApperance>size/2){
//     //         cout<<"majority number: "<<numberOfApperance<<endl;
//     //         return value;
//     //     }
//     // }
//     sort(arr.begin(),arr.end());
//     int frequency=1;
//     int ans=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]==arr[i-1]){
//             frequency++;
//         }else{
//             frequency=1;
//             ans=arr[i];
//         }
//         if(frequency>size/2){
//             return ans;
//         }
//     }
// }
// int main(){
//     vector<int> arr={1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,};
//     int size=arr.size();
//     cout<<"majority element: "<<majorityElement(arr,size);
// }

//moore's voting algorithm
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> name){
    int frequency =1;
    int answer = 0;
    for(int i=0;i<name.size();i++){
        if(frequency==0){
            answer = name[i];
        }
        if(answer = name[i]){
            frequency++;
        }else{
            frequency--;
        }
        if(frequency>name.size()/2){
            return answer;
        }
        else{
            return -1;
        }
    }
}
int main(){
    vector<int> name={1,2,3,4,5};
    int result = majorityElement(name);
    cout<<result;
}