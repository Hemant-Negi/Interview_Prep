#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n;cin>>n;
	// std::vector<int> v(n,5);
	int v[n];
	int i = 0;
	while(i<n){
		cin>>v[i];
		i++;
	}
	cout<<sizeof(v)<<endl;
	for(int i:v){
		cout<<i<<" ";
	}

	return 0;
}

