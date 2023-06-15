/*

Problem Link: https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>
#define ll long long
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	ll res=1ll, b=x;
	while(n>0) {
		if (n&1) res = (res%m*b%m) % m;
		b = (b%m*b%m) % m;
		n>>=1;
	}

	return (int)(res%m);
}
