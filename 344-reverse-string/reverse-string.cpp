class Solution {
public:
    void reverseString(vector<char>& s) {
        int right=s.size()-1;
        int left=0;
        int size=s.size();
     
        
        while(left<right)
        {
            char temp=' ';
            temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
            

        }
        for(int i=0;i<size;i++)
        {
            cout<<s[i];
        }
        
    }
};