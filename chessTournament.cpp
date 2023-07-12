/*

Problem Link: https://www.codingninjas.com/studio/problems/chess-tournament_8230779?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
bool f(long long dis,vector<int> &arr,int c,int n){
	int k=1;
	long long pre_pos = arr[0];
	for(int i=0;i<n;i++) {
		if(arr[i]-pre_pos>=dis) {
			pre_pos=arr[i];
			k++;
		}
		if(k==c) return true;
	}

	return false; 
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(),positions.end());
	long long i=0, j=positions[n-1]-positions[0];
	long long res=-1;
	while(i<=j) {
		long long m=i+(j-i)/2;
		if(f(m,positions,c,n)) {
			i=m+1;
			res=m;
		}
		else j=m-1;
	}
	return res;
}
