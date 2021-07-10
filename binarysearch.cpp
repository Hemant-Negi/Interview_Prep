#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//array must be sorted ->
int main(){

	int n=9,key;cin>>key;
	int a[n] = {1,2,3,5,7,10,11,12,15};
	int l=0,r=n-1,mid;
	while(l<=r){
		mid = (l+r)/2;
		if(a[mid] == key){
			cout<<"found at index "<<mid<<endl;
			break;
		}
		else if(a[mid]<key){
			l=mid+1;
		}
		else if(a[mid]>key){
			r = mid-1;
		}
	}
	if(l>r){
		cout<<" not found in array"<<endl;
	}
	return 0;
}
