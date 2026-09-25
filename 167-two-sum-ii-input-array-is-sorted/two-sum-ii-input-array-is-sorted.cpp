class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index;
        int sum=0;
        int right=numbers.size()-1;
        int left=0;
        while(left<right)
        {
            sum=numbers[left]+numbers[right];
            if(sum==target)
            {index.push_back(left+1);
            index.push_back(right+1);
            return index;               
            }
            else if(sum>target)
            {
                right--;
                sum=0;
            }
            else
            {
                left++;
                sum=0;
            }
        }
        return {};
    }
};