#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cfloat>
#include <bitset>
using namespace std;
int main() {
    long long i,j,a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long long aodd=a,pa=0,pb=0;
        long long bodd=b;
        while(aodd%2==0){
            aodd=aodd/2;
            pa++;
        }
        while(bodd%2==0){
            bodd=bodd/2;
            pb++;
        }
        if(aodd!=bodd){
            cout<<-1<<endl;
            continue;
        }
        cout<<(abs(pa-pb)+2)/3<<endl;
    }

    return 0;
}