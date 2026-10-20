class Solution {
public:
    int compress(vector<char>& chars) {
        int count =0;

        int write=0;
        int i=0;

        while(i<chars.size()){
            int start=i;
            while(i<chars.size() && chars[i]==chars[start]){
                count++;
                i++;
            }

            chars[write++]=chars[start];

            

            if(count > 1){
                string s=to_string(count);
                for(char c : s){
                chars[write++]=c; 
            }
            }

            count=0;
        }
        return write;
    }
};