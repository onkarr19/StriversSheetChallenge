/*

Problem Link: https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge

*/

bool search(vector<int>&arr, int k) {
    int l=0, r=arr.size()-1;
    while (l<=r) {
        int mid = l + (r-l)/2;
        if (arr[mid]==k) return true;
        if (arr[mid]<k) l = mid+1;
        else r = mid-1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
    for (auto& row : mat) {
        if (search(row, target)) return true;
    }

    return false;
}