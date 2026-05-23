#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
      int g,c,l;
      cin>>g>>c>>l;
      vector<int>ans;
      ans.push_back(g);
      ans.push_back(c);
      ans.push_back(l);
    sort(ans.begin(),ans.end());
    if(ans[2]-ans[0]>=10){
        cout<<"check again ";
    }else{
        cout<<"final"<<" "<<ans[1];
    }

    return 0;
}