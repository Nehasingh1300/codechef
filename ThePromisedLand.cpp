#include <iostream>
using namespace std;

int main() {
       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,s,m,n,x,y;int X[10003],Y[10003];int Z[10003];int U[10003];
    cin>>t;
    while(t--)
   {        cin>>m>>n;
        cin>>x>>y>>s;
        X[0]=0;X[x+1]=m+1;
        Y[0]=0;Y[y+1]=n+1;
        long long int e=0;
        for(int i=1;i<=x;i++)
        {cin>>X[i];e+=(X[i]-X[i-1]-1)/s;}
        e+=(X[x+1]-X[x]-1)/s;
        long long int f=0;
        for(int i=1;i<=y;i++)
          {cin>>Y[i];f+=(Y[i]-Y[i-1]-1)/s;}
           f+=(Y[y+1]-Y[y]-1)/s;
           cout<<e*f<<endl;
    }
	// your code goes here
	return 0;
}
