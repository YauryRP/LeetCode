#include <iostream>

class Solution {

    public:
        std::string mergealternately(std::string word1, std::string word2){
        
            int s1 = word1.length();
            int s2 = word2.length();
            
            
            std::string result = "";

            int i = 0;
            for(; i < s1 && i < s2; i++){
                result = result + word1[i] + word2[i];
            }

            for(; i < s1; i++){
                result = result + word1[i];
            }

            for(; i < s2; i++){
                result = result + word2[i];
            }

            return result;
        }

        };
        
        int main(){
            Solution sol;
            std::string result = sol.mergealternately("abc", "pqr");
            std::cout << result << std::endl;
            return 0;
}