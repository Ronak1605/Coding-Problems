# Problem: Coderbyte - Codeland Username Validation

# Solution Status: WIP

"""
Problem Description: 

Have the function CodelandUsernameValidation(str) take the str parameter being passed and determine if the string is a valid username according to the following rules:

1. The username is between 4 and 25 characters.
2. It must start with a letter.
3. It can only contain letters, numbers, and the underscore character.
4. It cannot end with an underscore character.

If the username is valid then your program should return the string true, otherwise return the string false.

Examples:
Input: "aa_"
Output: false
Input: "u__hello_world123"
Output: true

"""

# Solution:
def CodelandUsernameValidation(strParam):
    """Validate a username against Codeland's rules.    
    Rules:
    1. Length must be between 4 and 25 characters.
    2. The first character must be a letter.
    3. Allowed characters are letters, digits, and underscore (_).
    4. The last character cannot be an underscore.  
    Args:
      strParam: Username string to validate.    
    Returns:
      isValid: true if valid, otherwise false.
    """ 
    # code goes here

    # keep this function call here 
    print(CodelandUsernameValidation(input()))


