#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //n = number of arrays, q = num of queries, l = length of each array
    int n, q;

    cin >> n >> q;
    vector<vector<int>> vect1(n);

    for(int i = 0; i < n; i++){
        int l;
        cin >> l; //length of each vector
        vect1[i].resize(l); //resize to the specified length
        for(int j = 0; j < l; j++){
            cin >> vect1[i][j];//fill each item in each vector
        }
    }
    //for the num of queries, cout the item
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        cout << vect1[a][b] << endl;
    }

    return 0;
}

