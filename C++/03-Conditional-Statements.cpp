#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    string a[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    if (n <= 9) {
    cout << a[n-1];
    }
    else {
    cout << "Greater than 9" << endl;
    }
    return 0;
}

