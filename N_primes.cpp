#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,i=3,count=0;
    cout<<"Enter the no:of Primes needed "<<endl;
    cin>>n;
    vector<int> primes;
    primes.push_back(1);
    primes.push_back(2);
    while(i<=n)
    {
        count=1;
        for(int j=1;j<primes.size();j++)
        {
            	if(i%primes[j]!=0)
            	{
            	    count++;
            	}
            
        }
        if(count == primes.size())
            primes.push_back(i);
        i++;
    }
    for(int i=0;i<primes.size();i++)
        cout<<primes[i]<<"  ";
    return 0;
}

