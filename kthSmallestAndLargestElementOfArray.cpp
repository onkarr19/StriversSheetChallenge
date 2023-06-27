/*

Problem Link: https://www.codingninjas.com/studio/problems/kth-smallest-and-largest-element-of-array_8230829?challengeSlug=striver-sde-challenge

*/

int p(vector<int>& arr,int l,int r) {
    int pivot=arr[l];
    int i=l,j=r;
    while(i<j) {
        while(i<r && pivot>=arr[i]) i++;
        while(j>l && pivot<arr[j]) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}

int f(vector<int>& arr,int l,int r,int k) {
    if(l>=r) return arr[l];
    
    int i=p(arr,l,r);
    if(i+1==k) return arr[i];
    if(i+1>k) return f(arr,l,i-1,k);
    return f(arr,i+1,r,k);
}

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	int small=f(arr,0,n-1,k);
    int large=f(arr,0,n-1,n-k+1);
 
    return {small,large};
}
