/*
#include <stdio.h>
#include <vector>
#include <iostream>


using namespace std;
class Matrix
{
public:
	Matrix()
	{
		rows = 0;
		cols = 0;
	}
	Matrix(int rows, int cols)
	{
		this->rows = rows;
		this->cols = cols;	
		init_matrix();
	}
	const int GetNumRows()const { return rows; }
	const int GetNumColumns()const { return cols; }
	
	void Reset(int new_rows, int new_cols)
	{
		if (new_rows <= 0 || new_cols <= 0)
		{
			throw out_of_range("out_of_range");
			return;
		}
		
		set_rows_cols(new_rows, new_cols);
		resize_matrix();
		set_zeroes();
	}

	int* At(int row, int col) 
	{
		return &matrix.at(row).at(col);
	}
	int At(int row, int col)const 
	{
		return matrix.at(row).at(col);
	}
	void print_matrix()
	{
		for (vector<int> i : matrix)
		{
			for (int j : i)
			{
				cout << j << " ";
			}
			cout << endl;
		}
	}

	//переделать перегрузку оператора '='
	Matrix operator = (const Matrix& other)
	{
		this->rows = other.rows;
		this->cols = other.cols;
		this->Reset(this->rows, this->cols);
		for (int i = 0; i < this->rows; i++)
		{
			for (int j = 0; j < this->cols; j++)
				this->matrix[i][j] = other.matrix[i][j];
		}
		return *this;
	}
	friend Matrix operator + (const Matrix& left, const Matrix& right)
	{
		Matrix result(left.rows, left.cols);

		if ((left.rows == right.rows) && (left.cols == right.cols))
		{
			for (int i = 0; i < left.rows; i++)
			{
				for (int j = 0; j < left.cols; j++)
					result.matrix[i][j] = left.matrix[i][j] + right.matrix[i][j];
			}
			return result;
		}
		

		else
			throw invalid_argument("invalid_argument");


	}
	friend ostream& operator << (ostream& out, const Matrix &other)
	{
		for (vector<int> i : other.matrix)
		{
			for (int j : i)
			{
				out << j << " ";
			}
			out << endl;
		}
		return out;
	}
	friend istream& operator >> (istream& in, Matrix& other)
	{ 
		int rows, cols;
		cin >> rows >> cols;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				in >> other.matrix[i][j];
			}
			cout << endl;

		}
		return in;
	}


private:

	int rows;
	int cols;
	vector <vector<int>> matrix;
	void set_zeroes()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				matrix[i][j] = 0;
			}
		}
	}
	void set_rows_cols(int rows, int cols)
	{
		this->rows = rows;
		this->cols = cols;
	}
	void init_matrix()
	{
		for (int i = 0; i < rows; i++)
			matrix.push_back(vector<int>());
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				matrix[j].push_back(0);
		}
		
	}
	void resize_matrix()
	{
		this->matrix.resize(this->rows);
		for (int i = 0; i < this->rows; i++)
			this->matrix[i].resize(this->cols);
	}
	
};



int main()
{
	
	
	Matrix matrix(3, 3);
	matrix.Reset(2, 2);
	Matrix matr(2, 2);
	cout << matrix;
	cout << endl;
	cout << matr;
	cout << endl;
	cin >> matrix;
	cin >> matr;
	Matrix matr_res(2, 2);
	matr_res = matr + matrix;
	cout << matr + matrix;
	cout << matrix;
	return 0;
}

*/