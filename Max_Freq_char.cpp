#include <iostream>
using namespace std;

int main() 
{
  int i,j,count=1,t_count=1;
  string str;
  char temp;
  cout<<"Enter the sentance"<<endl;
  getline(cin,str);
  for(int i=0;i<str.size();i++)
  {
    count=1;
    for(int j=i;j<str.size();j++)
    {
        if(str[i]==str[j])
      	{
        	count++;
        }
    }
    if(t_count<count)
    {
      t_count=count;
      temp=str[i];
    }
  }
  cout<<"Max frequency character is:";
  cout<<temp;
  return 0;
}
