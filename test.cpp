#include <iostream>
/*
    You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is
    longer than the other, append the additional letters onto the end of the merged string.
*/

int main()
{
    std::string word1 = "abcd";
    std::string word2 = "pq";
    
    std::string out_string;
      

    if (word1.length() > word2.length()) {
        int a = 0;
        for (int i = 0; i < word2.length(); i++) {
            out_string += word1[i];
            out_string += word2[i];
            a++;
        }
        for (int i = a; i < word1.length(); i++) {
            out_string += word1[i];
        }

    }
    else if (word1.length() < word2.length()) {
        int a = 0;
        for (int i = 0; i < word1.length(); i++) {
            out_string += word1[i];
            out_string += word2[i];
            a++;
        }
        for (int i = a; i < word2.length(); i++) {
            out_string += word2[i];
        }
    }
    else {
        for (int i = 0; i < word1.length(); i++) {
            out_string += word1[i];
            out_string += word2[i];
        }
    }

    

    std::cout << out_string;

	return 0;
}


