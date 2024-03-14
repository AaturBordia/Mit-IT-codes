
N = 4
 
 
 
def transpose(A,B): 
 
 for i in range(N): 
  for j in range(N): 
   B[j][i] = A[i][j] 
 

A = [ [1, 2, 3, 4], 
 [5, 6, 7, 8], 
 [9, 10, 11, 12], 
 [13, 14, 15, 16]]
print("Original matrix is") 
for i in range(N): 
 for j in range(N): 
  print(A[i][j], " ", end='') 
 print() 
  
 
 
B= [ [0, 0, 0, 0], 
 [0, 0, 0, 0], 
 [0, 0, 0, 0], 
 [0, 0, 0, 0]] # To store result 
 
transpose(A, B)
 
print("Result matrix is") 
for i in range(N): 
 for j in range(N): 
  print(B[i][j], " ", end='') 
 print()

  
