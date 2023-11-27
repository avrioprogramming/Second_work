#include <iostream>
#include "biblioteka.h"
using namespace std;

int main()
{
    int n= 0;
    int a[] = { 1,2,3,4,5,6,7,8,9 };
    int* arr = new int[n];

    int select;
    L: cout << "Write num a function\n";
    cin >> select;
    switch (select)
    {
    case 1:
        n = sizeof(a) / sizeof(a[0]);
        Elem(a, n);
        break;
    case 2:
        cout << "size = ";
        cin >> n;
        Insert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i]<< " ";
        }
        break;
    default:
        cout << "try again\n";
        goto L;
    }
    
    
    
    
}

