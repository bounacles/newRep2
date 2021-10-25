#ifndef matrix_H
#define matrix_H

#include<string>

using namespace std;

class Matrix
{

private:
	int rows_, cols_;
	double **values;
public:
	Matrix(int rows, int cols);
	Matrix(double** v, int rows, int cols);
	Matrix add(Matrix m);
	Matrix asign(double v, int row, int col);
	Matrix product(Matrix m);
	string toString();


#endif
