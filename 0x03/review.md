# 3273 두 수의 합

너무 오래걸렸던 문제

```cpp
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

```

이렇게 최종적으로 하긴 했는데 초반에 arr, match 함수를 main 안에 두니까 stack overflow 때문에 실패. 근데 이걸 모르고 삽질함.

나중에 전역으로 선언했는데 x-a[i]가 1000000보다 큰 경우를 생각 못하고 1000000으로 둠.
다음엔 범위를 좀 더 생각해야겠다.
