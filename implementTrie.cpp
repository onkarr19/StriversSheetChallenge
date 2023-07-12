/*

Problem Link: https://www.codingninjas.com/studio/problems/implement-trie_8230696?challengeSlug=striver-sde-challenge&leftPanelTab=1

*/

/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

class TrieNode {
public:
 
    char data;
    TrieNode* children[26];
    bool isTerminal;
 
    TrieNode(char ch) {
        data=ch;
        for(int i=0;i<26;i++) children[i]=NULL;
        isTerminal=false;
    }
};


class Trie {

public:

    TrieNode* root;

    /** Initialize your data structure here. */
    Trie() {
        root=new TrieNode('\0');
    }

    /** Inserts a word into the trie. */
    void insertUtil(TrieNode* root, string word) {
        if(word.size()==0) {root->isTerminal=true;return;}
        if(root->children[word[0]-'a']==NULL) 
            root->children[word[0]-'a']=new TrieNode(word[0]);
        insertUtil(root->children[word[0]-'a'],word.substr(1));
    }

    void insert(string word)
    {
        insertUtil(root,word);
    }

    /** Returns if the word is in the trie. */
    bool searchUtil(TrieNode* root,string word) {
        if(word.size()==0){return root->isTerminal;}
        if(root->children[word[0]-'a']==NULL) return false;
        return searchUtil(root->children[word[0]-'a'],word.substr(1));
    }
 
    bool search(string word)
    {
        return searchUtil(root,word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* temp=root;
        for(auto it:prefix) {
            if(temp->children[it-'a']==NULL) return false;
            temp=temp->children[it-'a'];
        }
        return true;
    }
};
