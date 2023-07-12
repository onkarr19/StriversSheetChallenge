/*

Problem Link: https://www.codingninjas.com/studio/problems/roman-numeral-to-integer_8230780?challengeSlug=striver-sde-challenge

*/

int romanToInt(string s) {
    // Write your code here
    int res = 0;
    unordered_map<char, int> mp = {
        {'I', 1}, 
        {'V', 5}, 
        {'X', 10}, 
        {'L', 50}, 
        {'C', 100}, 
        {'D', 500}, 
        {'M', 1000}
    };
    int n = s.size();
    for(int i=0; i<n-1; ++i)
        res += mp[s[i]] * (mp[s[i]] < mp[s[i+1]] ? -1 : 1);

    return res + mp[s[n-1]];
}
