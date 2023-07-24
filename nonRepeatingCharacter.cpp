class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       map<char, int> m;
       
       
       for(int i=0; i<S.length(); i++) {
           
           m[S[i]]++;
       }
       
        for(int i=0; i<S.length(); i++) {
            
            char ch = S[i];
            
            if(m[ch] == 1) {
                return ch;
            }
        }
        
        return '$';
       
    }

};