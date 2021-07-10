#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];cin>>a[0];
	int curr_sum=0,max_sum=0;
	int left = -1,right = -1;	
	int cumm_sum[n] = {}; 
	cumm_sum[0] = a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumm_sum[i] = cumm_sum[i-1] + a[i];
	}
	for (int i = 0; i < n; i++){
		for(int j=0;j<n;j++){
			curr_sum = 0;
			curr_sum = cumm_sum[j] - cumm_sum[i-1];
			if(curr_sum>max_sum){
				max_sum = curr_sum;
				left = i;
				right = j;
			}
		}
	}
	for(int i = left;i<=right;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<max_sum<<endl;
	return 0;
}
