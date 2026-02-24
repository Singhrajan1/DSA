// #include<iostream>
// using namespace std;
// int main(){
//     int  number;
//     int power;
//     int result=1;
//     cout<<"enter the number you want to find the power of: ";
//     cin>>number;
//     cout<<"enter the power you want to calculate for the number: ";
//     cin>>power;
//     for(int  i=1;i<=power;i++){
//         result=result * number;
//     }
//     cout<<result;
// }

#include <iostream>
using namespace std;
int main()
{
    long int number;
    long long int BF;
    cout << "enter the number: ";
    cin >> number >> BF;
    long long int ans = 1;
    if(BF==0)
    {
        cout<<number; return 1;
    } 
        
    if(number==0) {cout<<number; return 0;}
    if(number==-1 && BF%2==0) cout<<1;
    if(number==-1 && BF%2!=0) cout<<-1;
    if(BF<0){
        number =1/number; 
        BF=-BF;
    }
    while (BF > 0)
    {
        if (BF % 2 == 1)
        {
            ans *= number;
        }
        number *= number;
        BF /= 2;
    }
    cout << ans;
}