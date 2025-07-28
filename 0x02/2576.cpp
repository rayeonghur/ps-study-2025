#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[7], sum = 0, min=101;
    for (int i = 0; i<7; i++){
        cin >> a[i];
        if(a[i]%2!=0){
            sum += a[i];
            if(min>a[i])
                min = a[i];
        }
    }
    if(sum==0)
        cout << -1;
    else
        cout<< sum<<'\n'<<min;
}

