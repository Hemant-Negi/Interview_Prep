#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
	int k;
	cin>>k;
	int a[100] = {12,13,10,9,5,22};
	int len = sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<len;i++){
		if(a[i]==k){
			cout<<"found at index "<<i<<endl;
			break;
		}
	}
	if(i==len){
		cout<<"not found in array"<<endl;
	}
	return 0;
}
