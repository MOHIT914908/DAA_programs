/* Given a sorted array of +ve integers, design an algorithm and implement using a
program to find three index i,j,k such that arr[i]+arr[j]=arr[k]  */

#include<iostream>
using namespace std;

void check(int arr[], int n)
{
     int  k;
     for(int i=0, k=i+2; i<n; i++,k++)
     {
         for(int j=i+1; j<n; j++)
         {
             if((arr[i]+arr[j])==arr[k])
             cout<<"i= "<<i<<endl<<"j= "<<j<<endl<<"k= "<<k<<endl;
         }
     }
     return;
}
int main()
{
    int n;
    cout << "Enter the element you want to insert in an array ";
    cin >> n;
    cout << "Enter elements " << endl;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    check(arr, n);
}
