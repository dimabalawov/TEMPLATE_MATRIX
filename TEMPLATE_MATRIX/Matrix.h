#pragma once
#include<iostream>
#include<iomanip>
using namespace std;

template<class T>
class Matrix
{
	T** arr;
	int rows;
	int cols;
public:
	Matrix() = default;
	Matrix(int r, int c);
	Matrix(const Matrix<T>& a);
	~Matrix();
	void Input();
	void Print();
	Matrix<T> operator+(const Matrix<T> a);
	Matrix<T> operator-(const Matrix<T> a);
	Matrix<T> operator/(const Matrix<T> a);
};
template <class T>
Matrix<T>::Matrix(int r, int c)
{
	arr = new T* [r];
	rows = r;
	cols = c;
	for (size_t i = 0; i < rows; i++)
	{
		arr[i] = new T[cols];
	}
}
template <class T>
Matrix<T>::Matrix(const Matrix<T>& a)
{
	rows = a.rows;
	cols = a.cols;
	arr = new T * [rows];
	for (size_t j = 0; j < rows; j++)
	{
		arr[j] = new T[cols];
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = a.arr[i][j];
		}
	}
}
template <class T>
Matrix<T>::~Matrix()
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
}
template <class T>
void Matrix<T>::Input()
{
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}
}template <class T>
void Matrix<T>::Print()
{
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<setw(4)<< arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
template <class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> a)
{
	if (a.rows != rows || a.cols != cols)
	{
		cout << "Matrix must be the same size to add up!" << endl;
		return *this;

	}
	Matrix<T> temp(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			temp.arr[i][j] += a.arr[i][j];
	}
	return temp;

}
template <class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> a)
{
	if (a.rows != rows || a.cols != cols)
	{
		cout << "Matrix must be the same size to substruct!" << endl;
		return *this;

	}
	Matrix<T> temp(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			temp.arr[i][j] -= a.arr[i][j];
	}
	return temp;

}
template <class T>
Matrix<T> Matrix<T>::operator/(const Matrix<T> a)
{
	if (a.rows != rows || a.cols != cols)
	{
		cout << "Matrix must be the same size to substruct!" << endl;
		return *this;

	}
	Matrix<T> temp(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (a.arr[i][j] != 0)
			{
				temp.arr[i][j] /= a.arr[i][j];
			}
		}
			
	}
	return temp;

}