#include <iostream>
#include <string>
using namespace std;

// In the first line print two space-separated integers, representing the length of  and  respectively. 
// In the second line print the string produced by concatenating  and  (). 
// In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.
int main() {
    string a, b;
    string temp;
	cin >> a >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    temp = a;
    temp[0] = b[0];
    b[0] = a[0];
    a = temp;
    cout << a << " " << b;
  
    return 0;
}
