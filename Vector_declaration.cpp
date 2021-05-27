/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve(5,100);
	vector<int>v;
	v.push_back(15);
	v.push_back(16);
	v.push_back(22);
	v.pop_back();
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}*/


#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(15);
	v.push_back(16);
	v.push_back(22);
	v.pop_back();
	cout<<"First vector : ";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
	vector<int>v1(v);//To copy elements from v to v1
	cout<<"Second vector : ";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}

