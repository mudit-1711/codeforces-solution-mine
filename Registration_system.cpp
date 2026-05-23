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
    int i,j,k,n;
    unordered_map<string,int>data;
    cin>>n;
    while(n--!=0){
        string s;
        cin>>s;
        if(data[s]==0){
            cout<<"OK"<<endl;
        }else{
            cout<<s<<data[s]<<endl;
        }
        data[s]++;
    }

    return 0;
}