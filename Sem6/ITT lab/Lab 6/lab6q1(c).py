
string = "Hii I am Baymax Your personal healthcare companion"
words = [word.lower() for word in string.split()]
print(string)
words.sort()
print("The sorted words are:")
for word in words:
   print(word)
