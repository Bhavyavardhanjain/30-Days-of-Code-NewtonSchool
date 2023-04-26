// Link of the qestion
// https://my.newtonschool.co/playground/code/6146hm9ahktk

#include "bits/stdc++.h"
using namespace std;

long countTriplets(int N, int K)
{
	if (K % 2 == 0) {
		long long int x = N / K;
		long long int y = (N + (K / 2)) / K;

		return x * x * x + y * y * y;
	}

	else {
		long long int x = N / K;
		return x * x * x;
	}
}

int main()
{
	int N, K;
    cin >> N >> K;
	cout<<countTriplets(N, K);
	return 0;
}
