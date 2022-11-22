#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n){
// we need compute the nth fibonacci number
if(n <= 1){
    return 0;
}
if(n == 2 || n == 3){
    return 1;
}
else{
return Fibonacci(n - 1) + Fibonacci(n - 2);
}
}

int main(){
int n;
cin >> n;
cout << Fibonacci(n) ;
}
