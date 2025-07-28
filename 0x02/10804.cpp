// #include <bits/stdc++.h>
// using namespace std;

// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int a[21], x, y;
//     for (int i = 1; i <= 20; i++){
//         a[i] = i;
//     }
//     for (int i = 0; i < 10; i++){
//         cin >> x >> y;
//         reverse(a+x, a+y+1);
//     }
//     for (int i = 1; i <= 20; i++){
//         cout << a[i]<<" ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[21], x, y, temp, m;
    for (int i = 1; i <= 20; i++){
        a[i] = i;
    }
    for (int i = 0; i < 10; i++){
        cin >> x >> y;
        m = ((y - x) + 1) / 2;
        for (int i = 0; i<m; i++){
            temp = a[x+i];
            a[x+i] = a[y-i];
            a[y - i] = temp;
        }
    }
    for (int i = 1; i <= 20; i++){
        cout << a[i]<<" ";
    }
}

