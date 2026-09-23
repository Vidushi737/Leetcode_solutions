class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> end;
        set<int> st;
        set<int> common;

        for(int i=0;i<nums1.size();i++)
        {
            st.insert(nums1[i]);
            
        }
        for(int i=0;i<nums2.size();i++)
        {
           if(st.find(nums2[i])!=st.end())// does the number exist inside the nums1 because we need it to be common between both
           {
             end.push_back(nums2[i]);
             st.erase(nums2[i]);
           }
        }
        /*for(auto it:common)
        {
            end.push_back(it);
        }*/
        return end;
        

    }
};