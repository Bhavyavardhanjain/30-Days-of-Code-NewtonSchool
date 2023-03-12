# Link of the question
# https://my.newtonschool.co/playground/code/m7o2fy11pjjj

from collections import Counter
n=int(input())
l=list(map(int,input().split()))
l=Counter(l)
chk=min(l.values())
for i in l:
    if l[i]==chk:
        print(i)
        break