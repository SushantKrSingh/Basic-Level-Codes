//Date : 26/02/2019
// Coding during night time :)
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b)
	    {
	        cout<<a+b<<endl;
	        cout<<a-b<<endl;
	        cout<<a/b<<endl;
	        cout<<a*b<<endl;
	    }
	    else
	    {
	        cout<<b+a<<endl;
	        cout<<b-a<<endl;
	        cout<<b/a<<endl;
	        cout<<b*a<<endl;
	    }
	}
	return 0;
}

//By: Jealous Guy :)
