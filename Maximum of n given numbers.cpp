#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int maxnum(int arr1[], int a){
    int result = arr1[0];
for(int i = 1; i < a; i++){
    if(arr1[i] > result){
       result = arr1[i];
    }
  }
  return result;
}

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << maxnum(arr, n) << endl;
}
