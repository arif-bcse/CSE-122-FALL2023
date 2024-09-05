
#include <bits/stdc++.h>
using namespace std;

int height(int N)
{
	return floor(log2(N));
}

int main()
{
	int N ;
	cin>>N;
	cout << height(N);
	return 0;
}

