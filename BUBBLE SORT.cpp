#include <iostream>
using namespace std;

int main ()
{
	int temp,n;
	
	cout<<"Number of Data : ";cin>>n;
	cout<<"======================"<<endl;
	cout<<endl;
	
	int bil[n];
	
	for (int a=0;a<n;a++)
	{
		cout<<"Data ["<<a<<"]= ";
		cin>>bil[a];
	}
	
	cout<<endl;
	cout<<"Data Before Ordered"<<endl;
	cout<<"======================"<<endl;
	for(int a=0;a<n;a++)
	{
		cout<<bil[a]<<" ";
	}
	cout<<endl;
	
	for(int iteration=1;iteration<n;iteration++)
	{
		for (int index=0;index<n-iteration;index++)
		{
			if(bil[index]>bil[index+1]) //ASCENDING
			//if(bil[index]<bil[index+1]) //DESCENDING
			{
				temp = bil[index];
				bil[index] = bil[index+1];
				bil[index+1] = temp;
			}
		}
	}
	
	cout<<endl;
	cout<<"Data After Ordered"<<endl;
	cout<<"======================"<<endl;
	for (int a=0;a<n;a++)
	{
		cout<<bil[a]<<" ";
	}
cout<<endl;

system ("pause");
}
