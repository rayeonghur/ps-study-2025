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

