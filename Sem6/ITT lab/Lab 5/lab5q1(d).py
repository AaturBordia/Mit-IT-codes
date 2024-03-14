A = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]

B = [[5,8,1],
    [6,7,3],
    [4,5,9]]

result = [[0,0,0],
         [0,0,0],
         [0,0,0]]


for i in range(len(A)):
   for j in range(len(A[0])):
       result[i][j] = A[i][j] + B[i][j]

print("Matrix 1") 
for i in range(len(A)): 
 for j in range(len(A)): 
  print(A[i][j], " ", end='') 
 print()
print("Matrix 2") 
for i in range(len(B)): 
 for j in range(len(B)): 
  print(B[i][j], " ", end='') 
 print()
print("Resultant Matrix") 
for i in range(len(result)): 
 for j in range(len(result)): 
  print(result[i][j], " ", end='') 
 print()
