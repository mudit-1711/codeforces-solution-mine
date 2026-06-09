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
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==2){
            cout<<"1 2 1 1 2 2 1 2"<<endl;
        }else if(n==3){
            cout << "1 1 2 1 2 3 1 3 2 2 3 3\n";
        }else{
            for(i=1;i<=n;i++){
                cout<<i<<" "<<i<<" ";
            }
            cout<<"2 1 ";
            for(i=3;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n<<" ";
            for(i=n-2;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}