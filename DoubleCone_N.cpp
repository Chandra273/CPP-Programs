#include <iostream>
using namespace std;

int main() 
{
 int i,j,n;
 cout<<"Enter no:of stars:";
   cin>>n;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<=i;j++)
      cout<<" "<<" ";
    for(int j=i;j<=n-i;j++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
  }
  for(int i=0;i<4;i++)
  {
    for(int j=i;j<4;j++)
    {
        cout<<" "<<" ";
    }
    for(int j=4-i;j<n+i-1;j++)
      cout<<"*"<<" ";
    cout<<endl;
  }
  return 0;
}
