#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int col[m] ={0};
	int row[n] = {0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				col[j] = 1;
				row[i] = 1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(col[j] || row[i] ){
				matrix[i][j] = 0;

			}
		}
	}
	return matrix;

}