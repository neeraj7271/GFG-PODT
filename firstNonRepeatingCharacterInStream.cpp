class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char, int> count;
		    
		    queue<int> q;
		    
		    string ans = "";
		    
		    for(int i=0; i<A.size(); i++) {
		        
		        char ch = A[i];
		        
		        count[ch]++;
		        
		        q.push(ch);
		        
		        while(!q.empty()) {
		            
		            char front = q.front();
		            
		            if(count[front] > 1) {
		                q.pop();
		            }
		            else {
		                ans.push_back(front);
		                break;
		            }
		        }
		        
		        if(q.empty()) {
		            ans.push_back('#');
		        }
		    }
		    
		    return ans;
		}

};