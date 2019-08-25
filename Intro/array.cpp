#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* You'll be given an array of  integers and you have to print the integers in the reverse order. */  
    int n;
    cin >> n;
    int arr[n];
    for(int i = n - 1; i >= 0; i--){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
