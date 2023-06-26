/*

Problem Link: https://www.codingninjas.com/studio/problems/median-of-two-sorted-arrays_8230788?challengeSlug=striver-sde-challenge

*/

double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	int n1 = a.size();
    int n2 = b.size();
	if(n1>n2) median(b, a);
	int n = n1+n2;
    
    int l = 0, r = n1;
    while(l <= r) {
        int m1 = l + (r-l)/2;
        int m2 = (n+1)/2 - m1;

        int l1 = m1==0 ? INT_MIN : a[m1-1];
        int l2 = m2==0 ? INT_MIN : b[m2-1];
        int r1 = m1==n1 ? INT_MAX : a[m1];
        int r2 = m2==n2 ? INT_MAX : b[m2]; 
        if (l1<=r2 and l2<=r1) {
            if((n)%2==0) return ((max(l1,l2)) + (min(r1,r2))) / 2.0;
            else return max(l1, l2);
        }
		else if (l1>r2) r = m1-1;
        else l = m1+1;
    }

	return l;
}
