/*include <iostream>
using namespace std;

const long long MOD = 1000000007LL;

int main()
{
	long long n;
	long long res;
	long long nMod;

	n = 0LL;
	res = 1LL;

	cin >> n;
	nMod = n % MOD;

	for (long long i = 1, sqr = 0; (sqr = i * i) <= n; ++i) {
		if (n % i == 0) {
			if (n != sqr) {
				res = res * nMod;
				res %= MOD;
			}
			else {
				res = res * (i % MOD);
				res %= MOD;
			}
		}
	}
	cout << res << '\n';

	return 0;
}*/
/*#include <iostream>
using namespace std;

const long long MOD = 1000000007LL;

int main()
{
	long long n;
	long long res;
	long long nMod;

	n = 0LL;
	res = 1LL;

	cin >> n;
	nMod = n % MOD;

	for (long long i = 1, sqr = 0; (sqr = i * i) <= n; ++i) {
		if (n % i == 0) {
			if (n != sqr) {
				res = res * nMod;
				res %= MOD;
			}
			else {
				res = res * (i % MOD);
				res %= MOD;
			}
		}
	}
	cout << res << '\n';

	return 0;
}*/
#include <iostream>
#include <stdlib.h>
using namespace std;
long long ct=0LL;

long long n;
const long long mod=1000000007LL;
int compare (void *first, void *second) {
     if (*(int*)first > *(int*)second)
        return -1;
     else if (*(int*)first < *(int*)second)
        return 1;
     else return 0;
}
long long Hanoi(int arr[]){
    long long before=-1;
    long long answer =0;
    int i;
    for(i=0;i<n;i++){
        if(before==arr[i])
            answer = (answer+1)%mod;
        else
            answer = (2*answer+1)%mod;
        before=arr[i];

    }
    return answer;
	/*if(n==1){
		ct++;
	}
	else{
		Hanoi(n-1);
		ct++;
		Hanoi(n-1);
	}*/
}
int main(){
    long long i;
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++){
        cin>>arr[i];
	}
	qsort(arr,n,sizeof(int),compare);
	ct = Hanoi(arr);
	cout << ct;
	return 0;
}
