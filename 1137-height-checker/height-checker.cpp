class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        for(int i=0;i<heights.size();i++)
        {
            expected.push_back(heights[i]);
        }
        int temp=0;
        for(int i=0;i<expected.size()-1;i++)
        {
            for(int j=0;j<expected.size()-1-i;j++)
            {
                if(expected[j]>expected[j+1])
                {
                 temp=expected[j];
                expected[j]=expected[j+1];
                expected[j+1]=temp;
                }
            }
        }
        int c=0;
        for(int i=0;i<expected.size();i++)
        {
            if(heights[i]!=expected[i])
            {
               c++;
            }
        }
        return c;
    }
};