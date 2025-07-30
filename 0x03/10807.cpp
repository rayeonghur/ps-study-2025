#include <bits/stdc++.h>
using namespace std;

int arr[201];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        arr[t + 100]++;
    }
    cin >> v;
    cout << arr[v + 100];
}
