// 3. Longest Substring Without Repeating Characters
// Medium

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		
		// Idea is to keep expanding window when criteria met
		// restrict when not met
		
		int length = 0; 
		int left = 0; 
		int right = 0;
		int currMax = 0; 
		int max = 0; 
		
		// Holds char and last index seen. 
		unordered_map<char, int> hashMap;
		
		int n = s.size(); 
		
		while(left < n && right < n){
			// If right pointer, does not point to a character in the hash
			// map expand the map and add it to the map
			if(hashMap.find(s[right]) == hashMap.end()){ 
				hashMap[s[right]] = right; 
				right++;
			}
			
			//If right pointer does point to a character that is already
			// in the hashMap check if its last seen point is in the 
			// substring
			else {
				
				// If it is in the current substiring
				if(hashMap[s[right]] >= left){
					currMax = right - left; 
					
					// Check to see if currMax is greater than
					// the absolute max before restricting the window
					if(currMax > max)
						max = currMax; 
					left = hashMap[s[right]] + 1; 
				}
				
				hashMap[s[right]] = right; 
				right++; 
			}
		}
		
	   if((right - left) > max)
		   max = right - left;  
		
	   return max;  
	}
};