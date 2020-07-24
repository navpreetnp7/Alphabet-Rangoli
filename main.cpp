#include <iostream>
using namespace std;

int main() {
	int n = 10,hyp;
	for(int i=0;i<n;i++){
		hyp = 2*(n-i-1);
		for(int j=0;j<hyp;j++) cout<<"-";
		for(int k=0;k<=i;k++){
			cout<<char(n-k+96);
			if(k!=i)cout<<"-";
		}
		for(int k=i;k>0;k--){
			cout<<"-"<<char(n-k+97);
		}
		for(int l=0;l<hyp;l++) cout<<"-";
		cout<<"\n";
	}
	for(int i=n-2;i>=0;i--){
		hyp = 2*(n-i-1);
		for(int j=0;j<hyp;j++) cout<<"-";
		for(int k=0;k<=i;k++){
			cout<<char(n-k+96);
			if(k!=i)cout<<"-";
		}
		for(int k=i;k>0;k--){
			cout<<"-"<<char(n-k+97);
		}
		for(int l=0;l<hyp;l++) cout<<"-";
		cout<<"\n";
	}

	return 0;
}
