#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int N = 5;
const int M = 5;

void  delete_matrix(int** A, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		free(A[i]);
	}
	free(A);
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void init_static_matrix(int A[][N], unsigned m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = i * j;
		}
	}
}
void print_static_matrix(int A[][N], unsigned m)
{
	printf("Static Array:");
	printf("\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("\n");

}
void swap_rows(int** A, int row1, int row2, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		swap(&A[row1][i], &A[row2][i]);
	}

}
int** create_dynamic_matrix(int rows, int cols)
{
	int **matrix = (int**)malloc(sizeof(int*) * rows);
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = (int*) malloc(sizeof(int) * cols);
	}
	return matrix;
}
void init_dynamic_matrix(int** A, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			A[i][j] = rand() % 21 - 10;
		}
	}
}
void print_dynamic_matrix(int** A, int rows, int cols)
{
	printf("Dynamic matrix");
	printf("\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");

}
void transponed_matrix(int** A, int rows, int cols)
{
	int** B = create_dynamic_matrix(cols, rows);
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			B[i][j] = A[j][i];
		}
	}
	print_dynamic_matrix(B, cols, rows);
	delete_matrix(B, cols);
}
int sum_of_top_triangle(int** A, int rows, int cols)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = cols - 1; j >= 0; j--)
		{
			if (i == j)
				break;
			sum += A[i][j];
		}
	}
	return sum;
}
int main()
{
	srand(time(NULL));
	int rows, cols;
	scanf_s("%d %d", &rows, &cols);
	int** dyn_matrix = create_dynamic_matrix(rows, cols);
	init_dynamic_matrix(dyn_matrix, rows, cols);
	printf("Sum of top right triangle: %d", sum_of_top_triangle(dyn_matrix, rows, cols));
	delete_matrix(dyn_matrix, rows);
	
	return 0;
	


}
