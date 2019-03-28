num = int(input())
a = input()
a = a.split(' ')
 
max = -1
sum = 0
temp = 0
start = 0
end = 0
for i in range(num):
    sum = sum + int(a[i])
    if sum > max:
        max = sum
        end = i
        start = temp
    elif sum < 0:
        sum = 0
        temp = i+1
 
if(max >= 0):
    print(max,a[start],a[end],sep=' ')
else:
    print(0,a[0],a[len(a) -1],sep=' ')
