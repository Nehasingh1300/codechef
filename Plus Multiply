#include<iostream>
using namespace std;

int main() {
	int t,res;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    for(int i=0; i<n; i++){
	        for(int j=i; j<n; j++){
	            if(arr[i]*arr[j]==arr[i]+arr[j])
	                res++;
	        }
	    }cout<<res;
	}
	
	return 0;
}
