#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a[10000], x=0, y=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        x += 10+ 10*(a[i] / 30);
        y += 15 + 15*(a[i] / 60);
    }
    if(x<y)
        cout << "Y " << x;
    else if(x>y) cout << "M " << y;
    else cout << "Y M " << x;
}

