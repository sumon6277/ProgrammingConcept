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

    int sumOfAll = 0;

    for(int i = 0; i<element; i++)
    {
        sumOfAll += array[i];
    }

    int average = sumOfAll / element;

    cout << "The average of all the values of array is --> " << average << endl;

    return 0;
}