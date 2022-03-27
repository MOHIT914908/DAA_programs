#include <iostream>
using namespace std;
int main()
{
    system("color f0");
	int n,swap=0,comp=0;
	cout<<"Mohit Gusain_20011623_F"<<"\n";
	cout<<"Enter the number of elements in an array:"<<"\n";
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
	cin>>arr[i];
	int min,temp;
	for(int i=00; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
		{
			comp++;
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		swap++;
	}
	cout<<"after sorting"<<endl;
	for(int i=0; i<n; i++)
	cout<<arr[i]<<"  ";
	cout<<"number of comperition="<<comp<<"\n";
	cout<<"number of Swaps ="<<swap<<"\n";
}
