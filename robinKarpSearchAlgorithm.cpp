/*

Problem Link: https://www.codingninjas.com/studio/problems/rabin-carp_8230831?challengeSlug=striver-sde-challenge

*/

vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	int n=pattern.size();
    vector<int>res;
 
    for (int i=0; i<text.size(); i++) {
        if (text[i]==pattern[0] && (i+n-1)<text.size()) {
            string str=text.substr(i, n);
            if (str==pattern) res.push_back(i+1);
        }
    }
    return res;
}

