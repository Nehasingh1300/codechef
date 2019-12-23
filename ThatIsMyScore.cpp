#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,arr,arr1;
	    cin>>n;
	    for(int a=0; a<n; a++){
	       cin>>arr[a]>>arr1[a];
	       if(arr[b]>=1&&arr[b]<=8){
	           for(int i=0; i<8; i++){
                    for(j=i+1; j<8; j++)
                    {
                         if(arr1[j] < arr1[i])
                        {
                            int temp = arr1[i];
                            arr1[i] = arr1[j];
                            arr1[j] = temp;
                        }
                    }
                }cout<<arr1[7]+arr1[6];
	       }
	       else
	        cout<<"0";
	   }
	
	return 0;
}
