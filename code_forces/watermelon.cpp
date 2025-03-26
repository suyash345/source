#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         std::vector<char> list_of_chars_;
//         int size = 0;
//         if(s.size()==1){
//             return 1;
//         }
//         for(int i = 0; i<s.size() ;++i) {
//             for(int j =0;j<i;++j){
//                 auto it = find(list_of_chars_.begin(), list_of_chars_.end(), s[i]);
//                 if (it != list_of_chars_.end()){ // if the letter is repeated in list.
//                     size = list_of_chars_.size();
//                     break; 
//                 }
//             else { // if the letter isn't repeated in the list.
//                 std::cout<< "Adding S[i]: " << s[i] << "\n";                
//                 list_of_chars_.push_back(s[i]);
//                 size = list_of_chars_.size();
//             }
//         }
//     }
//             return size;
//     }
    
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<char> list_of_chars_;
        list_of_chars_.push_back(s[0]);
        for(int i = 0; i<s.size() ;++i) {
            for(int j =0;j<i;++j){
                auto it = find(list_of_chars_.begin(), list_of_chars_.end(), s[i]);
                if (it != list_of_chars_.end()){
                    std::cout<< "breaking"<< "\n";
                    return list_of_chars_.size();
            }
            else {
                list_of_chars_.push_back(s[i]);
                std::cout<< "adding element: "<< s[i] << "\n";
            }
        }
    }
            return list_of_chars_.size();
    }
    
};

int main() {

    Solution solution;
    std::cout<<solution.lengthOfLongestSubstring("pwwkew");

}