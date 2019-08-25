#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


// You have to complete the function vector parseInts(string str). 
// str will be a string consisting of comma-separated integers, 
// and you have to return a vector of int representing the integers.
vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch;
    int x;
	vector<int> vect;
    while(ss >> x){
        vect.push_back(x);
        ss >> ch;
    }
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
