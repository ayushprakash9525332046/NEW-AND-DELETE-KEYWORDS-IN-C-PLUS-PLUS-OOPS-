#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "the value at address is " << (*ptr) << endl;

    // int *p=new int (56);
    double *p = new double(56.65);
    cout << "the value at new address is " << (*p) << endl;
    delete p;

    // int *arr = new int[4];
    // arr[0] = 2;
    // arr[1] = 3;
    // arr[2] = 6;
    // arr[3] = 7;
    // arr[4] = 8;
    // cout << "the value at arr[0] is " << arr[0] << endl;
    // cout << "the value at arr[1] is " << arr[1] << endl;
    // cout << "the value at arr[2] is " << arr[2] << endl;
    // cout << "the value at arr[3] is " << arr[3] << endl;
    // cout << "the value at arr[4] is " << arr[4] << endl;
    return 0;
}