class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i = 0;
        vector<int> r;
        int size = nums.size();
        for (i = 0; i < size; i++)
        {
            for (int j = 1; j < size; j++)
            {
                if ((i != j) && (r[i] + r[j]) == target)
                {
                    r.push_back(i);
                    r.push_back(i);
                    return r;
                }
            }
        }
    }
};

void main(){
    
}