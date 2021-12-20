#include <iostream>

using namespace std;

int deiling(int a, int b){
    int c = a / b;
    return c;
}

int remainder(int a, int b){
    int c = a % b;
    return c;
}

int main()
{

    int a = 0;
    int b = 0;

    cin >> a >> b;

    cout << b << " gengur " << deiling(a, b) << " sinnum upp i " << a << endl;

    cout << "afgangur er " <<remainder(a, b) << endl;




    return 0;
}
