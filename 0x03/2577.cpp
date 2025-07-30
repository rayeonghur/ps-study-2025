#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c, arr[10]={0}, result;
    cin>>a>>b>>c;
    result = a * b * c;
    while(result>0){
        arr[result % 10]++;
        result/=10;
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<"\n";
    }
}
