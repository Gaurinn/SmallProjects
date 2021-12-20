#include <iostream>

using namespace std;

int powerTwo(int a){
    a = a * a;
    return a;
}

int main()
{
    int a = 0;
    cin >> a;
    cout << powerTwo(a) << endl;
    return 0;
}
