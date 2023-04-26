# Link of the question
# https://my.newtonschool.co/playground/code/4sagozc5l67p

def shifted_string(n, s):
  res = ""
  for char in s:
    res += chr((ord(char) - ord("A") + n) % 26 + ord("A"))
  return res
n = int(input().strip())
s = input().strip()
print(shifted_string(n, s))
