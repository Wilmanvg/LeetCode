// Two Sum 
// Use hashMap 
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		//HashMap with key being the number and the value being it's index.
		unordered_map<int,int>hashMap; 
		vector<int>solution; 
		
		for(int i = 0; i < nums.size(); i++){
			if(hashMap.find(target-nums[i]) == hashMap.end()){
				hashMap.insert(make_pair(nums[i], i)); 
			}
			else{
				solution.push_back(i);
				solution.push_back(hashMap.find(target-nums[i])->second);
				return solution; 
			}
		}
		
		return solution; 
		
	}
};