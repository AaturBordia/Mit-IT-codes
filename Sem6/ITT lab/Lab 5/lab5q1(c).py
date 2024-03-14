M=3
N=3
P=3
Q=4
A = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]

B = [[5,8,1,2],
    [6,7,3,0],
    [4,5,9,1]]
result = [[0,0,0,0],
         [0,0,0,0],
         [0,0,0,0]]

for i in range(N):
   for j in range(N):
       for k in range(N):
           result[i][j] += A[i][k] * B[k][j]
print("Matrix 1") 
for i in range(M): 
 for j in range(N): 
  print(A[i][j], " ", end='') 
 print()
print("Matrix 2") 
for i in range(P): 
 for j in range(Q): 
  print(B[i][j], " ", end='') 
 print()
print("Resultant Matrix") 
for i in range(P): 
 for j in range(Q): 
  print(result[i][j], " ", end='') 
 print()
