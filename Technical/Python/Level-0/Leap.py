# Q - 8 : Leap year or Not a Leap year
# Question Type: Coding
# Problem Statement
# Given a year, check whether it is a leap year

# Input Format
# Accept integer as input

# Output Format
# Print Leap or Not Leap year

# Constraints
# NA
def Year(year):
    if(year % 4) == 0 :
        if(year % 100) == 0:
            if(year % 400) == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False
year = int(input(""))
if(Year(year)):
    print("Leap year")
else:
    print("Not a Leap year")