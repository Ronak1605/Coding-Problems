// Problem: Coderbyte - Find Intersection

// Solution Status: WIP

/* 
Problem Description: 
Have the function FindIntersection(strArr) read the array of strings stored in strArr which will contain 2 elements: the first element will represent a list of comma-separated numbers sorted in ascending order, the second element will represent a second list of comma-separated numbers (also sorted). Your goal is to return a comma-separated string containing the numbers that occur in elements of strArr in sorted order. If there is no intersection, return the string false.
Examples
Input: {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"}
Output: 1,4,13
Input: {"1, 3, 9, 10, 17, 18", "1, 4, 9, 10"}
Output: 1,9,10
*/

// Solution: 
#include <iostream>
#include <string>
using namespace std;

/**
 * FindIntersection - Finds the intersection of two lists of numbers.
 * @strArr: An array of two strings, each containing a list of comma-separated numbers sorted in ascending order.
 * @arrLength: The length of the strArr array (should be 2).
 * 
 * Returns: A comma-separated string containing the numbers that occur in both lists in sorted order, or "false" if there is no intersection.
 */
string FindIntersection(string strArr[], int arrLength) {
  
  // code goes here  
  return strArr[0];

}

// keep this function call here
int main(void) { 
   
  string A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << FindIntersection(A, arrLength);
  return 0;
    
}