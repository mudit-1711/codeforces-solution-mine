#include <iostream>
using namespace std;
int main(){
    long long a,m,n;
    cin>>n>>m>>a;
    long long w = (n+a-1)/a;
    long long b = (m+a-1)/a;
    cout<<w*b;
}