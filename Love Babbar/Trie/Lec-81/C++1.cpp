#include<iostream>
#include<vector>
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
            root -> isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        if(root -> children[index]!=NULL)
        {
            child = root ->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        insertUntil(child,word.substr(1));
    }

    void insertWord(string word)
    {
        insertUntil(root,word);
    }

    void printSuggestions(TrieNode* curr,vector<string> & temp,string prefix)
    {
        if(curr -> isTerminal)
        {
            temp.push_back(prefix);
        }

        for(char ch='a';ch<='z';ch++)
        {
            TrieNode* next = curr->children[ch-'a'];
            if(next!=NULL)
            {
                prefix.push_back(ch);
                printSuggestions(next,temp,prefix);
                prefix.pop_back();
            }

        }
    }

    vector<vector<string>> getSuggestions(string str)
    {
        TrieNode* prev = root;
        vector<vector<string>> ans;
        string prefix= "";

        for(int i=0;i<str.length();i++)
        {
            char lastch = str[i];
            prefix = prefix + lastch;

            int index = lastch - 'a';

            // check for lastch
            TrieNode* curr = prev -> children[index];

            // if not found
            if(curr == NULL)
            {
                break;
            }


            // if found
            vector<string> temp;
            printSuggestions(curr,temp,prefix);

            ans.push_back(temp);
            temp.clear();
            prev = curr;
        }
        return ans;
    }
};


vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    //    Write your code here.
    Trie* t = new Trie();

    for(int i=0;i<contactList.size();i++)
    {
        t->insertWord(contactList[i]);
    }

    return t->getSuggestions(queryStr);
}


int main()
{
    cout << "Implementation of phone directory using trie" << endl;
    return 0;
}