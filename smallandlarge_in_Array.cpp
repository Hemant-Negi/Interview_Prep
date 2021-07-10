#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>
using namespace std;
int main(){
	int a[6] = {12,13,10,9,5,22};
	int len = sizeof(a)/sizeof(a[0]);
	int i,min=INT_MAX,maxx = INT_MIN	;
	for(i=0;i<len;i++){
		if(a[i]<min){
			min = a[i];
		}
		if(a[i]>maxx){
			maxx = a[i];
		}
	}
	cout<<"min = "<<min<<endl;
	cout<<"max = "<<maxx<<endl;
	return 0;
}
