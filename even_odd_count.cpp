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

    int evenCnt = 0, oddCnt = 0;

    for(int i = 0; i<element; i++)
    {
        if(array[i] % 2 == 0)
        {
            evenCnt++;
        }
        else
        {
            oddCnt++;
        }
    }

    cout << "There is --("<<evenCnt<< ")-- even numbers in the array"<<endl;
    cout << "There is --("<<oddCnt<< ")-- odd numbers in the array"<<endl;


    return 0;
}