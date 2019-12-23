#include<iostream>
using namespace std;

int main() {
	int t,sum,arr[100000],arr1[100000];
	std::cin>>t;
	while(t--){
	    std::cin>>*arr;
	    std::cin>>*arr1;
	    int l=sizeof(arr1)/sizeof(arr1[0]);
	    for(int i=0; i<l-1; i++)
	        sum=sum+arr1[i];
	}
	std::cout<<sum;
	return 0;
}
#mycode
