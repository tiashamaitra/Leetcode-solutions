class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int i,index=0;
        for(i=0;i<n;i++)
        {
            if(ch==word[i])
            {
                index=i;
                break;
            }
        }
        if(index==0)
        {
            return word;
        }
        reverse(word.begin(),word.begin()+index+1);
        return word;
    }
};