#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[9], sum=0, x, y;
    for (int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    bool found=false; 
    for (int i = 8; i >0 && !found; i--){
        for (int j = 0; j <i; j++){
            if(sum-a[i]-a[j]==100){
                found=true;
                x = a[i];
                y = a[j];
                break;
            }
        }
    }
    sort(a, a+9);

    for(int k=0; k<9; k++){
        if(a[k]==x || a[k]==y)
            continue;
        cout<<a[k]<<'\n';
    }
}

