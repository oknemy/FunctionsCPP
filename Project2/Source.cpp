#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;
void fill_rand(int arr[], const int SIZE);
void fill_rand(double arr[], const int SIZE);// заполнение масива случайными значениями
void fill_rand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void print_array(int arr[], const int SIZE); // вывод масива на экран
void print_array(double arr[], const int SIZE); // вывод масива на экран
void print_array(int arr[ROWS][COLS], const int ROWS, const int COLS);

void sort_array(int arr[], const int SIZE); // сортировка масива
void sort_array(double arr[], const int SIZE);
void sort_array(int arr[ROWS][COLS], const int ROWS, const int COLS);

int sum_array(int arr[], const int SIZE); // сумма елементов масива
int average_array(int arr[], const int SIZE); // среднее арифетическое масива

int min_elemet_array(int arr[], const int SIZE); // минимальный елемент масива
int max_element_array(int arr[], const int SIZE); // максимальный елемент масива

void main()
{
	/*setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int rez = 1;
	cout << "Заполнение масива случайными значениями:" << std::endl;
	cout << "Сортировка масива:" << std::endl;
	sort_array(arr, SIZE);
	print_array(arr, SIZE);
	cout << std::endl;
	cout << "Сумма елементов масива: ";
	rez = sum_array(arr, SIZE);
	cout << rez << std::endl;
	cout << "Среднее арифметическое елементов масива: ";
	rez = average_array(arr, SIZE);
	cout << rez << std::endl;
	cout << "Минимальное значение в масиве: ";
	rez = min_elemet_array(arr, SIZE);
	cout << rez << std::endl;
	cout << "Максимальное значение в масиве: ";
	rez = max_element_array(arr, SIZE);
	cout << rez;
	double brr[SIZE];

	fill_rand(brr, SIZE);
	cout << std::endl;
	print_array(brr, SIZE);
	cout << std::endl;
	sort_array(brr, SIZE);
	cout << std::endl;
	print_array(brr, SIZE);*/
	int A[ROWS][COLS];
	fill_rand(A, ROWS, COLS);
	print_array(A, ROWS, COLS);
	cout << std::endl;
	sort_array(A, ROWS, COLS);
	print_array(A, ROWS, COLS);

}

void sort_array(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{

						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;

					}
					iter++;
				}
			}
		}
	}
	iter++;
	cout << endl;
	cout << iter;
	cout << endl;
}

void fill_rand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void print_array(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout <<	endl;
	}
}

void fill_rand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = (rand() % 100 + 10) / 10;

	}
}

void fill_rand(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = (rand() % 100 + 10) / 11;
		arr[i] /= 10;
	}
}

void print_array(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
}

void print_array(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
}

void sort_array(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = SIZE - 1; j >= i + 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int buffer = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = buffer;
			}
		}
	}
}

