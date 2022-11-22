#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int sum(int a[], int n){
//n = number of elements in the array
if(n <= 0){
    return 0;
}
else{
    return sum(a, n - 1) + a[n-1];
}
}

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << sum(arr, n) << endl;
}
