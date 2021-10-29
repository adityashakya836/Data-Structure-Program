def max(a, b):
	if(a > b):
		return a
	else:
		return b

def maximumsum(arr, K, N, M):
	sum = 0
	maxSum = 0
	dp = [[0 for i in range(N + 1)] for j in range(K + 1)]

	# Initialize dp[0][i] = 0
	for i in range(0, N + 1):
		dp[0][i] = 0

	# Initialize dp[i][0] = 0
	for i in range(0, K + 1):
		dp[i][0] = 0

	# Selecting i elements
	for i in range(1, K + 1):

		# Select i elements till jth row
		for j in range(0, N):

			# dp[i][j+1] is the maximum
			# of selecting i elements till
			# jth row

			# sum = 0, to keep track of
			# cummulative elements sum
			sum = 0
			maxSum = dp[i][j]

			# Traverse arr[j][k] until
			# number of elements until k>i
			for k in range(1, i + 1):
				if(k > M):
					break
					
				# Select arr[j][k - 1]th item
				sum += arr[j][k - 1]

				maxSum = max(maxSum, sum + dp[i - k][j])

			# Store the maxSum in dp[i][j+1]
			dp[i][j + 1] = maxSum

	# Return the maximum sum
	return dp[K][N]

# Driver Code
if __name__ == '__main__':
	arr = [[10, 10, 100, 30], [80, 50, 10, 50]]

	N = 2
	M = 4
	K = 5
	# Function Call
	print(maximumsum(arr, K, N, M))


	# This code is contributed by 29AjayKumar
