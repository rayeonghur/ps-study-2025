#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char x;
    int arr[26];
    fill(arr, arr + 26, 0);
    while(cin>>x){
        arr[x-'a']++;
    }
    for (int i = 0; i < 26; i++)
        cout << arr[i]<<" ";
}
