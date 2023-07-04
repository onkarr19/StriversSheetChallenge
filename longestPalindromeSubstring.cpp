/*

Problem Link: https://www.codingninjas.com/studio/problems/day-12-longest-palindromic-substring_8230702?challengeSlug=striver-sde-challenge

*/

string longestPalinSubstring(string str)
{
    // Write your code here.
    int n = str.size();
    int l, r, start=0, end=1;
 
    for(int i=1; i<n; i++) {
        l=i-1;
        r=i;
 
        while(l>=0 && r<n && str[l]==str[r]) {
            if(r-l+1 > end) {
                start=l;
                end=r-l+1;
                
            }
            l--;
            r++;
        }
 
        l=i-1;
        r=i+1;
 
        while(l>=0 && r<n && str[l]==str[r]) {
            if(r-l+1 > end) {
                start=l;
                end=r-l+1;
                
            }
            l--;
            r++;
        }
    }
    return str.substr(start, end);
}
