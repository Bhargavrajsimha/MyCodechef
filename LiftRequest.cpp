#include <iostream>
using namespace std;
long cp;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,q;
	    cin >> n >> q;
	    long long total = 0; cp = 0;
	    while(q--){
	        int a , b;
	        cin >> a>>b;
	        total+=abs(cp-a);
	        total+=abs(a-b);
	        cp = b;
	    }
	    std::cout << total << std::endl;
	}    
	return 0;
}
