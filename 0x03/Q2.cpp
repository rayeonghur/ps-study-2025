/*
주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1, 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.

func2({1, 52, 48}, 3) = 1,
func2({50, 42}, 2) = 0,
func2({4, 13, 63, 87}, 4) = 1
*/

#include <bits/stdc++.h>
using namespace std;


int func2(int arr[], int N){
    int temp[101] = {0};
    for (int i = 0; i < N; i++){
        if(temp[100-arr[i]]>0)
            return 1;
        temp[arr[i]]++;
    }
    return 0; 
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {1, 52, 48};
    cout << func2(arr, 3) << "\n"; // 1

    int arr1[] = {50, 42};
    cout << func2(arr1, 2) << "\n"; // 0

    int arr2[] = {4, 13, 63, 87};
    cout << func2(arr2, 4) << "\n"; // 1
}
