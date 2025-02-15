#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int a[n];
    cout << "enter the element";
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int j = 1; j <= n; j++)
    {
        int key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }

    cout << "<--------------------------------->" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}