# 2490 윷놀이

https://www.acmicpc.net/problem/2490
윷짝 4개 중 0의 개수를 세어 조건문으로 대응시켰다.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, a;
    for(int i=0; i<3; i++){
        a = 0;
        for (int j = 0; j<4; j++){
            cin>>x;
            if(x==0)
                a++;
        }
        if(a==0)
            cout << "E\n";
        else if(a==1)
            cout << "A\n";
        else if(a==2)
            cout<<"B\n";
        else if(a==3)
            cout << "C\n";
        else
            cout<<"D\n";
    }

}

```

정답 코드를 보고 (https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x02/solutions/2490.cpp) 1의 개수를 세어서 인덱스로 사용하면 매핑이 간결하다는 것을 알게되었다.

