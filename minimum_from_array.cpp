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

    int minimum = array[0];

    for(int i = 1; i<element; i++)
    {
        if(array[i] <= minimum)
        {
            minimum = array[i];
        }
    }

    cout << "\nThe minimum number of the array is : " << minimum << endl;
    
    return 0;
}