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

    int summation = 0;

    for(int i = 0; i<element; i++)
    {
        summation += array[i];
    }

    cout << "\nThe summation result of the array is : " << summation << endl;

    return 0;
}