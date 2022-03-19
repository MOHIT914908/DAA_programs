/* Q4. Given a sorted array of +ve integer containing few duplicate element,
 design a algorithm and implement it using a program and to find whether a key element is present or not. If present than also find how many number of copies present. */

#include <iostream>
using namespace std;
void checkDuplicate(int arr[], int n, int target)
{
    int count = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    if (count == -1)
    {
        cout << "Element is not found ";
        return;
    }
    else if (count == 0)
    {
        cout << "Element is present but there is no copies present";
        return;
    }
    else
    {
        cout << "Element is present and there are " << count<< " copies present in an array";
        return;
    }
}
int main()
{
    int n;
    cout << "Enter the elements you want to insert in an array ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target ";
    cin >> target;

    checkDuplicate(arr, n, target);
}
