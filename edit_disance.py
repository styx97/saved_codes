import numpy as np 
a = "polynomial"
b = "exponential"
c = "snowy"
d = "sunny"

def diff(x,y):
	if x == y:
		return 0
	else:
		return 1	

# COST : 
# 0 1 0 1 1 0 = 3
# S - N O W Y 
# S U N N - Y

def edit_distance(x,y):
	m, n = len(x),len(y)
	dp = [[0]*(n+1) for _ in range(m+1)]
	counter = 0
	for k in range(0,m+1):
		dp[k][0] = counter
		counter += 1
	for k in range(1,n+1):
		dp[0][k] = k	
	print(np.matrix(dp))
	for i in range(1,m+1):
		for j in range(1,n+1):
			#print(a[i-1],b[j-1])
			dp[i][j] = min(1+dp[i-1][j],1+ dp[i][j-1],diff(x[i-1],y[j-1])+dp[i-1][j-1])		 
	print(np.matrix(dp))
	return dp[m][n]

print(edit_distance(c,d))

