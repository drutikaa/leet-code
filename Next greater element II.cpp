class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
    vector<int> vec;
         
    for(int i=0;i<nums.size();i++){
        
        bool flag=false;
        int k=i+1;
       int idx=INT_MIN;
        
        while(idx!=i){
            
            idx=k%nums.size();
            if(nums[idx]>nums[i]){
                flag=true;
                vec.push_back(nums[idx]);
                break;
            }
            k++;
           
        }
         if(!flag) vec.push_back(-1);
    }
        return vec;
        
    }
};
