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
long long removeZerosMath(long long num) {
    if (num == 0) return 0;
    long long result = 0;
    long long place = 1;
    while (num > 0) {
        long long digit = num % 10;
        if (digit != 0) {
            result += digit * place;
            place *= 10;
        }
        num /= 10;
    }
    return result;
}
int main() {
    long long a,b;
    cin>>a;
    cin>>b;
    long long k  = removeZerosMath(a+b);
    long long a1 = removeZerosMath(a);
    long long b1 = removeZerosMath(b);
    long long knew = (a1+b1);
    if(k==knew){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}