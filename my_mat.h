#ifndef MY_MAT_H_
#define N 10
void buildMat(int mat[N][N]);
int min(int x,int y);
void calculateMatrix(int mat[N][N]);
int thereIsPath(int,int,int mat[N][N]);
int shorsetPath(int i,int j, int mat[N][N]);
int max(int x,int y);
int selectItems(int weights[],int values[],int selectes_bool[]);

#endif