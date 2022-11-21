#include<bits/stdc++.h>
using namespace std;

void TowersOfHanoi(int n,char x,char y,char z){
if(n >= 1){
        // x = starting rod, y = destination rod, z = intermediate rod
    TowersOfHanoi(n - 1, x, z, y);
    cout << "Move top disk  from tower " << x << " to top of tower " << y <<endl;
    TowersOfHanoi(n - 1, z, y, x);
  }
}

int main(){
 int a;
// a = number of disks (n in the above recursive function);
 cin >> a;
 TowersOfHanoi(a,'A', 'B', 'C');
}
