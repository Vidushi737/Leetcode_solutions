class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26]={0};
        int hash2[26]={0};
        /*if(ransomNote.length()>magazine.length())
        {
            return false;
        }*/
        {
            for(int i=0;i<ransomNote.length();i++)
            {
                hash[ransomNote[i]-'a']++;
            }
            for(int i=0;i<magazine.length();i++)
            {
                hash2[magazine[i]-'a']++;
                
            }
            for(int i=0;i<26;i++)
            {
                if(hash[i]>hash2[i])
                {
                    return false;
                }
            }
            return true;
        

        }
    }
};