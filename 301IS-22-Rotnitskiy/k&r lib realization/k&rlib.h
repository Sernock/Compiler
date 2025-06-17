#ifndef K_R
#define K_R

/**
 * @brief Reverses the given string in place.
 *
 * @param line The string to reverse.
 */
void reverse(char line[]);

/**
 * @brief Converts a hexadecimal string to an integer.
 *
 * The string may start with "0x" or "0X".
 *
 * @param s The input hexadecimal string.
 * @return The integer value of the hexadecimal string.
 */
int htoi(char s[]);

/**
 * @brief Deletes every character, that in string s1 that matches any character in string 2
 * 
 * @param s1 The string, where characters will be deleted
 * @param s2 The string, which characters will be deleted from s1
 */
void squeeze(char s1[], char s2[]);

/**
 * @brief Returns the index of the first occurrence in string s1 of any character from string s2.
 * 
 * If s1 contains no characters from s2, the function returns -1.
 * 
 * @param s1 The string to be searched.
 * @param s2 The string containing characters to match.
 * @return The index of the first character in s1 that matches any character in s2; 
 *         returns -1 if no such character is found.
 */
int any(char s1[], char s2[]);

/**
 * @brief Reads one line of text from standard input into the character array line[], with a maximum length specified by max.
 *
 * Reads characters from standard input until a newline, EOF, or (max - 1) characters have been read.
 * The resulting string is null-terminated and may include the newline character if it was read.
 *
 * @param line The buffer where the input line will be stored.
 * @param max The maximum number of characters to read, including the null terminator (the function reads up to max - 1 characters).
 * @return The length of the string stored in line (not including the null terminator).
 */
int getline(char line[], int max);

/**
 * @brief Return index of string s, where string t is starting
 * 
 * If string t is not found in string s, the function returns -1.
 * 
 * @param s The string to be checked
 * @param t The string containing characters to match.
 * @return The index of the first occurrence of string t in string s; 
 *         returns -1 if no such character is found.
 */
int strindex(char s[], char t[]);

/**
 * @brief Returns the index of the last occurrence of string t in string s
 * 
 * If string t is not found in string s, the function returns -1.
 * 
 * @param s The string to be checked
 * @param t The string containing characters to match.
 * @return The index of the last occurrence of string t in string s; 
 *         returns -1 if no such character is found.
 */
int strrindex(char s[], char t[]);

/**
 * @brief Checks some number x in an array v of size n with binary search method
 * 
 * If x in array v, function returns index of x. 
 * 
 * @param x Number to be founded
 * @param v Array of numbers in which the search will be
 * @param n Size of array v
 */
int binsearch(int x, int v[], int n);

void escape(char s[], char t[]);

void unescape(char s[], char t[]);

void expand(char s1[], char s2[]);

void copy(char to[], char from[]);

void detab(char line[]);

#endif // K_R
