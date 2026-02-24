#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {15,12,8,2,3,4};
    int best_day = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            int Max = arr[j] - arr[i];
            // best_day = max(Max, best_day);
            if(Max>best_day)
            best_day=Max;
        }
    }
    cout << best_day;
}