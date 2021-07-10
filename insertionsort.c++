#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
void insertion_Sort(int a[],int n){
	for(int i=1;i<n;i++){
		int j=i-1,temp = a[i];
		while(j>=0 and a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}


}

int main(){
	int a[] = {5,2,3,0,1};
	int n = sizeof(a)/sizeof(a[0]);
	insertion_Sort(a,n);
	for(int i:a){
		cout<<i<<" ";
	}
	return 0;
}
