// brute force
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(vector<int> name,int target,int size){
//     vector<int> answer;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(name[i] + name[j]==target){
//                 answer.push_back(i);
//                 answer.push_back(j);
//                 return answer;
//             }
//         }
//     }
// }
// int main(){
//     int target=9;
//     vector<int> name={1,2,3,4,5,6,7,8,9};
//     int size=name.size();
//     vector<int> answer=pairSum(name,target,size);
//     cout << answer[0] << " " << answer[1] << endl;
// }

// optimized

#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> name,int target,int size){
    int i=0,j=size-1;
    vector<int> answer;
    while(i<j){
        int pairSum=name[i] + name[j];
        if(pairSum<target){
            i++;
        }else if(pairSum>target){
            j--;
        }else{
            answer.push_back(i);
            answer.push_back(j);
            return answer;
        }
    }
}
int main(){
    int target=17;
    vector<int> name={1,2,3,4,5,6,7,8,9};
    int size=name.size();
    vector<int> answer=pairSum(name,target,size);
    cout << answer[0] << " " << answer[1] << endl;
}
