#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "\nEnter the number of element: "<<endl;
    int element;
    cin >> element;

    int array[element];
    cout << "\nEnter "<<element<<" positive values into the array: "<<endl;

    for(int i = 0; i<element; i++)
    {
        cin >> array[i];
    }

    cout << "The output values of the array is : (REVERSE)" << endl;

    for(int i = element-1; i>=0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}