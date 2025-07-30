#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, arr[9]={0};
    cin >> n; 
    while(n>0){
        int temp;
        temp=n % 10;
        if(temp==9)
            arr[6]++;
        else arr[temp]++;
        n/=10;
    }
    arr[6] = (arr[6] % 2) ? arr[6] / 2 + 1 : arr[6] / 2;
    cout << *max_element(arr, arr+9);

}
