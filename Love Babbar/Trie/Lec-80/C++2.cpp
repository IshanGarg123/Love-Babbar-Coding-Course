#include<iostream>
#include<vector>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUntil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        if(root -> children[index]!=NULL)
        {
            child = root -> children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root -> childCount++;
            root -> children[index] = child;
        }
        insertUntil(child,word.substr(1));
    }

    void insertWord(string word)
    {
        insertUntil(root,word);
    }

    void lcp(string word,string &ans)
    {
        TrieNode* temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp -> isTerminal)
            {
                break;
            }
            if(temp->childCount == 1)
            {
                ans = ans + word[i];
                int index = word[i] - 'a';
                temp = temp -> children[index];
            }
            else
            {
                break;
            }
        }
    }

};


string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* t = new Trie();

    // insert all strings in the Trie
    for(int i=0;i<n;i++)
    {
        t->insertWord(arr[i]);
    }

    string ans="";
    string word = arr[0];

    t->lcp(word,ans);

    return ans;
}

int main()
{
    cout << "Longest Common prefix using Trie" << endl;
    return 0;
}