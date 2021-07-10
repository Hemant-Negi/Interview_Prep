#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    std::vector<long int >a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    std::vector<int> b(33,0);
	    for(int i=0;i<n;i++){
	        long q = a[i];
	        int j = 32;
	        while(q){
	            b[j] = b[j]+q%2;
	            q = q/2;
	            j--;
	        }
	    }
	    int s=0;
	    for(int i=0;i<33;i++){
	        if(b[i]%k==0){
	            s+=(b[i]/k);
	        }
	        else{
	            s+=((b[i]/k)+1);
	        }
	    }cout<<s<<endl;
	}
	return 0;
}
