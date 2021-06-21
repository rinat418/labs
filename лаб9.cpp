#include <iostream>
#include <set>
#include <iterator>

using namespace std;
int main()
{
    string s;
    set<char> mySet;
    set<char>::iterator it;
    int k = 0;
    cout << "s = ", cin >> s, cout << endl;
    for (int i = 0; i < s.length(); i++)
        mySet.insert(s[i]);
    for (it = mySet.begin(); it != mySet.end(); ++it)
        cout << *it << "  ";
    k = mySet.size();
    cout << endl << "k = " << k;
    return 0;
}
