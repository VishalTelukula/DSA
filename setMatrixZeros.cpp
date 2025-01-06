#include <bits/stdc++.h>
void colUpdate(vector<vector<int>> &matrix,int n,int m,int j){
	for(int i=0;i<n;i++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;

		}
	}
}

void rowUpdate(vector<vector<int>> &matrix,int n,int m,int i){
	for(int j=0;j<m;j++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
}






vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				rowUpdate(matrix,n,m,i);
				colUpdate(matrix,n,m,j);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == -1){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}
///////bruteForce//////