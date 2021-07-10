#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int left = -1,right = -1;
	int curr_sum=0,max_sum=0;
	for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){
			curr_sum=0; //for every subarray 
			for(int k=i;k<=j;k++){
				curr_sum +=a[k]; 
			}if (curr_sum>max_sum)
			{
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
