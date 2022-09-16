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
