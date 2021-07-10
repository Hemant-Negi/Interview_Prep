#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool comapre(int a,int b){
	cout<<" comapre "<<a<<" and "<<b<<endl;
	return a<b;
}
int main(){
	int a[5] = {5,3,2,0,1};
	sort(a,a+5,comapre);
	for(int i:a){
		cout<<i<<" ";
	}
	return 0;
}
