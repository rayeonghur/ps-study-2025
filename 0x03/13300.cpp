#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, num=0, f[7]={0}, m[7]={0}, t1, t2;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> t1>>t2;
        if(t1)
            m[t2]++;
        else
            f[t2]++;
    }
    for (int i = 1; i <= 6; i++){
        num += (f[i] % k == 0) ? f[i] / k : f[i] / k + 1;
        num += (m[i] % k == 0) ? m[i] / k : m[i] / k + 1;
    }
    cout << num;
}
