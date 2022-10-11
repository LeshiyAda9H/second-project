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
	        if (j%2 == 0){
	            cout<<'*';
	        }
	        if ((j%2 == 1) and (j!=1)){
	            cout<<'*';
	        }
	        cout<<'*';
	    }
	    cout<<endl;
		
			
	}
	
	cout<<endl;

    return 0;
}
