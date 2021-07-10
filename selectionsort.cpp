#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
void selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		swap(a[i],a[min]);
	}
}
int main(){
	int a[5] = {5,4,3,1,2};
	int n=5;
	selection_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	

	return 0;
}
