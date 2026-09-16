class Solution { 
public: 
    int thirdMax(vector<int>& nums) { 
        int n=nums.size(); 
        int i; 
        
        long long largest=LLONG_MIN; 
        long long seclargest=LLONG_MIN; 
        long long thirdlargest=LLONG_MIN; 
        
        for(i=0;i<n;i++) 
        { 
            if(nums[i]>largest) 
            { 
                thirdlargest=seclargest; 
                seclargest=largest; 
                largest=nums[i]; 
            } 
            else if(nums[i]!=largest && nums[i]>seclargest) 
            { 
                thirdlargest=seclargest; 
                seclargest=nums[i]; 
            } 
            else if(nums[i]!=largest && nums[i]!=seclargest && nums[i]>thirdlargest) 
            { 
                thirdlargest=nums[i]; 
            } 
        } 
        
        if(thirdlargest==LLONG_MIN) 
        { 
            return largest; 
        } 
        else 
        { 
            return thirdlargest; 
        } 
    } 
};