class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int j = n - 1;
        int i = 0;
        while (j > i) {
            while (i < j && !isalnum(s[i])) {
                i++;
                //isalnum cheks if thatis alpha numeric or not
                //what is alphanumerics?
                //An alphanumeric character is either a letter (uppercase or lowercase) or a digit (0-9)
            }
            while (i < j && !isalnum(s[j])) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
                //tomower
                //tolower is a standard library function that converts an uppercase character to its corresponding lowercase equivalent
            }
            i++;
            j--;
        }
        return true;
    }
};