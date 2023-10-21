// AnagramCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>

// C++ implementation of the approach
// Function that returns true if a and b
// are anagarams of each other

using namespace std;

bool isAnagram(string a, string b)
{

	// Check if length of both strings is same or not
	if (a.length() != b.length()) {
		return false;
	}
	// Create a HashMap containing Character as Key and
	// Integer as Value. We will be storing character as
	// Key and count of character as Value.
	unordered_map<char, int> Map;
	// Loop over all character of String a and put in
	// HashMap.
	for (int i = 0; i < a.length(); i++) {
		Map[a[i]]++;
	}
	// Now loop over String b
	for (int i = 0; i < b.length(); i++) {
		// Check if current character already exists in
		// HashMap/map
		if (Map.find(b[i]) != Map.end()) {
			// If contains reduce count of that
			// character by 1 to indicate that current
			// character has been already counted as
			// idea here is to check if in last count of
			// all characters in last is zero which
			// means all characters in String a are
			// present in String b.
			Map[b[i]] -= 1;
		}
		else {
			return false;
		}
	}

	// Loop over all keys and check if all keys are 0.
	// If so it means it is anagram.
	for (auto items : Map) {
		if (items.second != 0) {
			return false;
		}
	}
	// Returning True as all keys are zero
	return true;
}

// Driver code
int main()
{
	string str1 = "gram";
	string str2 = "arm";

	// Function call
	if (isAnagram(str1, str2))
		cout << "The two strings are anagram of each other"
		<< endl;
	else
		cout << "The two strings are not anagram of each "
		"other"
		<< endl;
}

// This code is contributed by shinjanpatra
