#Compare this algorithm with backtracking to ubnderstand the concept
#first pointer i moves forword while the another pointer j moves back from i (every time it is incremented and sort the array upto i index 
#then i moves forward and j places the ith element at its correct place.
import random

def insertion(l):
    for i in range(len(l)-1):
        for j in range(i+1,0,-1):
            if(a[j]<a[j-1]):
                (a[j],a[j-1])=(a[j-1],a[j])
            else:
                break

choice=str(input("Do you want to create a random list(y/n): "))
if(choice=='y'):
    n = int(input("enter the size of list: "))
    a=random.sample(range(1,100),n)
elif(choice=='n'):
    a=[]
    n = int(input("enter the size of list: "))
    for i in range(n):
        t=int(input("Enter the element: "))
        a.append(t)
else:
    print("Invalid Input")


start=0
print("Before Sorting:", a)
insertion(a)
print("After sorting :", a)
print()
