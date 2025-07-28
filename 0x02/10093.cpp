#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b, n, m;
    cin >> a >> b;
    n = abs(a - b) - 1;
    if(n<=0) n=0;
    cout << n << '\n';
    m = min(a, b);
    for (long long i = 1; i <= n; i++){
        cout<<m+i<<" ";
    }
}

