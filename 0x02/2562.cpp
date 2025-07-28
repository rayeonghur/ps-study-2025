#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[9], max=-1, x;
    
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if(a[i]>max){
            x = i;
            max = a[i];
        }
            
    }
    cout << max << "\n"
         << x+1;
}

