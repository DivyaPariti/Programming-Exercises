# Q-1 : Statement Printing
# Question Type: Coding
# Problem Statement: Given an integer value, if it is divisible by 3 print “Hi”, if it is divisible by 5 print “Hello”. If it is divisible by both print “HiHello”.
# Input Format: Accept an integer as input
# Output Format: Print the output
# Constraints: NA
n = int(input(""))
if(n%3==0 and n%5!=0):
    print("Hi")
elif(n%5==0 and n%3!=0):
    print("Hello")
elif ((n%3==0) and (n%5==0)):
    print("HiHello")