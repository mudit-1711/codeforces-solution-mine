#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  int i,j,n;
  cin>>n;
  int count=0;
  vector<int> arr(n);
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
   sort(arr.begin(),arr.end());
   arr.erase(unique(arr.begin(), arr.end()), arr.end());
   for(int i = 0; i + 2 < arr.size(); i++){
        int a = arr[i], b = arr[i+1], c = arr[i+2];
        if(abs(a-b) <= 2 && abs(b-c) <= 2 && abs(a-c) <= 2){
            cout << "YES";
            return 0;
        }
    }
  cout<<"NO";
    return 0;
}
