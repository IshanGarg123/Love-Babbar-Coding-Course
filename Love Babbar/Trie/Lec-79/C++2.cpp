#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    public:
    TrieNode* root;

    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode('\0');
    }


    /** Inserts a word into the trie. */
    void insertUntil(TrieNode* root , string word)
    {
        if(word.length() == 0)
        {
            root->isTerminal = true;
            return; 
        }

        TrieNode* child;
        int index = word[0] - 'a';

        if(root -> children[index] != NULL)
        {
            child = root -> children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }
        insertUntil(child,word.substr(1));
    }

    void insert(string word) {
        return insertUntil(root,word);
    }

    /** Returns if the word is in the trie. */
    bool searchUntil(TrieNode* root,string word)
    {
        if(word.length() == 0)
        {
            if(root->isTerminal == true){
                return true;
            }
            return false;
        }

        TrieNode* child;
        int index = word[0] - 'a';

        if(root -> children[index] != NULL)
        {
            child = root -> children[index];
        }
        else
        {
            return false;
        }
        return searchUntil(child,word.substr(1));
    }

    bool search(string word) {
        return searchUntil(root,word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startswithUntil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            return true;
        }
        TrieNode* child;
        int index = word[0] - 'a';

        if(root -> children[index]!=NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return startswithUntil(child,word.substr(1));
    }

    bool startsWith(string prefix) {
        return startswithUntil(root,prefix);
    }
};

int main()
{
    cout << "Implementation of Trie in Coding Ninjas" << endl;
    return 0;
}