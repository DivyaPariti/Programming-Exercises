# Q - 6 : Print Days
# Question Type: Coding
# Problem Statement
# Write a program to print corresponding day based on given input

# Input Format
# Accept an integer as input

# Output Format
# Print corresponding day or invalid

# Constraints
# NA
day = int(input(""))
if day == 0:
    print("Sunday")
elif day == 1:
    print("Monday")
elif day == 2:
    print("Tuesday")
elif day == 3:
    print("Wednesday")
elif day == 4:
    print("Thursday")
elif day == 5:
    print("Friday")
elif day == 6:
    print("Saturday")
else:
    print("Invalid")