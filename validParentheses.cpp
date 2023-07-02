/*

Problem Link: https://www.codingninjas.com/studio/problems/valid-parentheses_8230714?challengeSlug=striver-sde-challenge

*/

bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>st;
    for (auto i : expression) {
        if (st.empty()) st.push(i);
        else if (  (st.top() == '(' && i == ')') 
                || (st.top() == '{' && i == '}')
                || (st.top() == '[' && i == ']')
            ) st.pop();
        else st.push(i);
    }
    
    return st.empty();
}
