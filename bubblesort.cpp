#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n=5;
	int a[n] = {5,4,3,1,2};
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
	return 0;
}
