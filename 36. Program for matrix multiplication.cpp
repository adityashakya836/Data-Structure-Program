//Program For Matrix Multiplication
#include<iostream>
using namespace std;

int main(){
	int R1=2,C1=3,R2=3,C2=2;
	int matrix1[R1][C1]={{1,2,3},{2,1,8}};
	int matrix2[R2][C2]={
		{1,2},
		{2,1},
		{3,1}
	};
	int result[R1][C2];
	for(int i=0;i<R1;i++){
		for(int j=0;j<C2;j++){
			result[i][j]=0;

			for(int k=0;k<R2;k++){
				result[i][j]+=matrix1[i][k]*matrix2[k][j];
			}
			cout<<result[i][j]<<" ";
		}	
	}
}
