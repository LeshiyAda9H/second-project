#include <iostream>

using namespace std;

int main()
{
    int n;
    
	cout<<"input n"<<endl;
	cin>>n;
	
	for(int i=1; i<=n ; ++i)
	{
	    for (int k=n; i<=k; --k){
	        cout<<' ';
	    }
	    for (int j=1; j<=i; ++j)
	    {
	        
	        if (j!=1){
	            cout<<'*';
	        }
	        cout<<'*';
	    }
	    cout<<endl;
	}
	
	//////////
	
	for(int i=1; i<=n ; ++i)
	{
	    for (int j=1; j<=i; ++j)
	    {
	        cout<<' ';
	    }
	    cout<<' ';
	    for (int k=n-1; i<=k; --k)
	    {
	        if (k!=n-1)
	        {
	        cout<<'*';
	        }
	        cout<<'*';
	        
	    }
	    cout<<endl;
	}
	
    return 0;
}
