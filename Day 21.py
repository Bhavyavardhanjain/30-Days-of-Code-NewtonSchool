# Link of the question
# https://my.newtonschool.co/playground/code/r3wv47h3fy1r

a,b=map(int,input().split())
c=""
while(a):
    c+=str(a%b)
    a=a//b
print(len(c))