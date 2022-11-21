#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

void SelectionSort(int a[], int n)
{
    for(int i = 0; i < n; i++){
        int j = i;
        for(int k = i+1; k < n; k++){
            if(a[k] < a[j]){
                j = k;
            }
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
}

int main(){
 int n;
 cin >> n;
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
SelectionSort(arr, n);
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
}
