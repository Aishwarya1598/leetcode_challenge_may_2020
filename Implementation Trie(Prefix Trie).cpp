class Trie {
public:
    Trie *ch[26];
    bool endword=false;  // To ensure end of a word
    void insert(string word) {
        Trie *word1=this;
        for(int i=0;i<word.size();i++)
        {
            int char1=word[i]-'a';
            if(word1->ch[char1]==NULL)
            {
                word1->ch[char1]=new Trie();
            }
            word1=word1->ch[char1];
        }
        word1->endword=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie *word1=this;
        for(int i=0;i<word.size();i++)
        {
            int char1=word[i]-'a';
            if(word1->ch[char1]==NULL)
                return false; // if one of the character doesnot match return false;
             word1=word1->ch[char1];
        }
        if(word1!=NULL && word1->endword==true)
            return true;
        return false;
       
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie *word1=this;
        for(int i=0;i<prefix.size();i++)
        {
            int char1=prefix[i]-'a';
            if(word1->ch[char1]==NULL)
                return false;
            word1=word1->ch[char1];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

(OR)

class Trie {
private:
    struct TrieNode
    {
        struct TrieNode *ch[26];
	    bool endword;
    };
    TrieNode* root;
public:
    Trie() 
    {
       root = new TrieNode();
    };
    void insert(string word) {
        TrieNode *word1=root;
        for(int i=0;i<word.size();i++)
        {
            int char1=word[i]-'a';
            if(word1->ch[char1]==NULL)
            {
                word1->ch[char1]=new TrieNode();
            }
            word1=word1->ch[char1];
        }
        word1->endword=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *word1=root;
        for(int i=0;i<word.size();i++)
        {
            int char1=word[i]-'a';
            if(word1->ch[char1]==NULL)
                return false;
             word1=word1->ch[char1];
        }
        if(word1!=NULL && word1->endword==true)
            return true;
        return false;
       
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *word1=root;
        for(int i=0;i<prefix.size();i++)
        {
            int char1=prefix[i]-'a';
            if(word1->ch[char1]==NULL)
                return false;
            word1=word1->ch[char1];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
