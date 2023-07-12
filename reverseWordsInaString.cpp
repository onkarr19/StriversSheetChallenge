/*

Problem Link: https://www.codingninjas.com/studio/problems/reverse-words-in-a-string_8230698?challengeSlug=striver-sde-challenge

*/

#include<stack>

string reverseString(string &str){
	// Write your code here.	
	stack<string> st; 
	string temp="";
	for(auto &i : str){  
		if(i==' ' && temp !="") {st.push(temp); temp="";}
		else if (i!=' ') temp += i;
	} 
	if (temp!="") st.push(temp);

	string res=""; 

	while (!st.empty()) {
		res += st.top(); st.pop();
		if (!st.empty()) res += " ";
	}
	
	return res;
}
