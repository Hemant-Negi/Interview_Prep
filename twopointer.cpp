#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// - only in sorted array -
int main(){

	int n = 8,s;
	cin>>s;
	int a[n] = {1,3,5,7,10,11,12,13};
	int i=0,j=n-1;
	while(i<=j){
		int sum = a[i]+a[j];
		if(a[i]+a[j]>s){
			j--;
		}
		else if(a[i]+a[j]<s){
			i++;
		}
		else{
			cout<<"pair is "<<a[i]<<" "<<a[j]<<endl;
			j--;i++;
		}
	}
	return 0;
}
