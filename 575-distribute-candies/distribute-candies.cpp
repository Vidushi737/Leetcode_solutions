class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int num=n/2;
        unordered_set <int> st;
        for(int i=0;i<candyType.size();i++)
        {
            st.insert(candyType[i]);
        }
        int size=st.size();
        if(num>size)
        {
            return size;
        }
       
        
            return num;
        
        
    }
};