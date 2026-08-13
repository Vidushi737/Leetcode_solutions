class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        string str="";
        for(int i=0;i<s.length();i++){

            if(s[i]>=97&&s[i]<=122||s[i]>=65&&s[i]<=90||s[i]>=48&&s[i]<=57){
                newstr+=(char)tolower(s[i]);

            }
        }
           for(int i=newstr.length()-1;i>=0;i--)
           {
              str+=newstr[i];
           }
          if(str==newstr)
          {
            return true;
          }
          else
          {
            return false;
          }
            

        }
        

    
};