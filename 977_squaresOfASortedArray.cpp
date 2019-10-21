// 977. Squares of a Sorted Array
// Easy
// Two Pointer
// O(n) time

/* We know that the biggest numbers will be at each end of our vector.
   Place a pointer on each end, compare, and then place to the end of
   the vector.
*/

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		int left = 0;
		int right = A.size() - 1; 
		vector<int> result(A.size(),0);
		int insertIndex = A.size() - 1; 
		
		// <= because we want to include our last number in the array
		while(left <= right){
			if(abs(A[left]) >= abs(A[right])){
				result[insertIndex] = pow(A[left],2);
				left++; 
			}
			
			else{
				result[insertIndex] = pow(A[right],2);
				right--;
			}
			
			insertIndex--; 
		}
		
		return result; 
	}
};