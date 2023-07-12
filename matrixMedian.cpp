/*

Problem Link: https://www.codingninjas.com/studio/problems/matrix-median_8230735?challengeSlug=striver-sde-challenge

*/

int f(vector<int> row, int k) {
    int l=0, r=row.size()-1;
 
    while(l<=r){
        int mid=l+(r-l)/2;
        if(row[mid]<=k) l=mid+1;
        else r=mid-1;
    }
    return l;
}

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size(), m=matrix[0].size();
    int l=1, r=1e9;
 
    while(l<=r){
        int mid=l+(r-l)/2;
        int t=0;
        for(int i=0; i<n; i++) t+=f(matrix[i],mid);

        if(t<=(n*m)/2) l=mid+1;
        else r=mid-1;
    }
 
    return l;
}
