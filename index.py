a = []
n = int(input("Enter number of elements : "))

for i in range(0, n):
    ele = int(input())
    a.append(ele) 

print(a) 
ans = []
length = len(a) -1
for i in range(1, length):
    if (a[i] > a[i+1] and a[i] > a[i-1]) or (a[i] < a[i + 1] and a[i] < a[i-1]):
        ans.append(a[i])
    
print(ans)
