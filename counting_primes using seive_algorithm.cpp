#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n,count=0;// n=10
	cin >> n;	
	//creating vector with 0's
  vector<int>seive(n+1,0);
  for(int i=2;i<n;i++)
  {
	seive[i]=1;// 0  0  1  1  1  1  1  1  1  1
  }
  for(int i=2;i*i<=n;i++)
  {
	 if(seive[i]==1)
	 {
		  for(int j=i*i;j<=n;j+=i)  // 0  0  1  1  0  1  0  1  0  0
	  {
		  seive[j]=0;
	  }
	 }
  }
  if(n==0 || n==1)
  {
	  cout<<0;
  }
  else
  {
	  for(int i=2;i<n;i++)
  {
	  if(seive[i]==1)
	  {
		  count+=1;
	  }
  }
  cout<<count;
  }
}
