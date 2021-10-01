n=int(input("Enter number of rows: "))
a=[]
for i in range(n):
    a.append([1])
    for j in range(1,i):
        a[i].append(a[i-1][j-1]+a[i-1][j])
    if(n!=0):
        a[i].append(1)
for i in range(n):
    print("   "*(n-i),end=" ",sep=" ")
    for j in range(0,i+1):
        print(f'{a[i][j]}     ',end=" ",sep=" ")
    print("\n")
