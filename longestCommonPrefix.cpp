/*

Problem Link: https://www.codingninjas.com/studio/problems/longest-common-prefix_8230847?challengeSlug=striver-sde-challenge

*/

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans="";
    for (int i=0; i<arr[0].size(); i++) {
        char ch=arr[0][i];
        bool match=true;
        for (int j=1; j<arr.size(); j++){
          if (arr[j].size() < i || ch != arr[j][i]) {
            match = false;
            break;
          }
        }
        if (match == false)
          return ans;
        else
          ans += ch;
    }
    return ans;
}



