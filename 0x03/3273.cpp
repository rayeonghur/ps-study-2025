#include <bits/stdc++.h>
using namespace std;

int arr[100000], match[2000000]={0};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, result=0;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;

    for (int i = 0; i < n; i++){
        if(x-arr[i]>0){
            if(match[x-arr[i]]>0) result++;
        }
        match[arr[i]]++;
    }
    cout<<result;
}
