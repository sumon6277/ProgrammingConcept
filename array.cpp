#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\nEnter the number of element: "<<endl;
    int element;
    cin >> element;

    int array[element];
    cout << "\nEnter "<<element<<" values into the array: "<<endl;

    for(int i = 0; i<element; i++)
    {
        cin >> array[i];
    }

    cout << "\nThe values of array with space separated: "<< endl;

    for(int i = 0; i<element; i++)
    {
        cout << array[i] <<" ";
    }

    cout << endl;

    return 0;
}