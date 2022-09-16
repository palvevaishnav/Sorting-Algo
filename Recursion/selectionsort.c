import random

def selectn(l,start,end):
    # condition to end recursion
    if(start==end):
        return
          
    #let the first element be the smalleest
    small = start
    # find smallest element in the list l
    for i in range(start,end):
        if(l[small]>l[i]):
            small=i
    # now we have the smallest element at 
    (l[small],l[start]) = (l[start],l[small])
    start += 1
    selectn(l,start,end)


n = int(input("enter the size of list: "))
# ask whether user wants to create a random list or enter the elements manualy
choice=str(input("Do you want to create a random list(y/n): "))
if(choice=='y'):
    a=random.sample(range(1,100),n)
elif(choice=='n'):
    # store integers in a list using map, split and strip functions
    # a = list(map(int, input("Enter the integer elements of list(Space-Separated): ").strip().split()))
    # print('The list is:', a)   # printing the list
    a=[]
    for i in range(n):
        t=int(input("Enter the element: "))
        a.append(t)
else:
    print("Invalid Input")

start=0
print("Before Sorting:", a)
selectn(a,start,len(a))
print("After sorting :", a)
print()
