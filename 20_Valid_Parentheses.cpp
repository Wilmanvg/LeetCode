//20. Valid Parentheses 
// Easy
// Implemented using a stack. 

class Solution {
public:
	bool isValid(string s) {
		stack<char>charStack; 
		char x; 
		for(int i=-0; i < s.length(); i++){
			if(s[i] == '[' || s[i] == '{' || s[i] == '('){
				charStack.push(s[i]);
				// Move onto next iteration 
				continue; 
			}
			
			// If it is not an opening bracket then it must be 
			// a closing bracket...If so stack must not be 
			// empty
			if(charStack.empty())
				return false;
			
			switch(s[i])
			{
				case ']': 
					// Store top element
					x = charStack.top(); 
					charStack.pop();
					if(x != '[')
						return false;  
					break;
				case ')':
					x = charStack.top(); 
					charStack.pop();
					if(x != '(')
						return false;
					break;
				case '}':
					x = charStack.top();
					charStack.pop();
					if(x != '{')
						return false;
					break;           
			}
		}  
		return (charStack.empty());     
	}
};