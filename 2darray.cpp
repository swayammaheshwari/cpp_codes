#include <bits/stdc++.h>
using namespace std;

int _2darray()
{
    int x[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int x2[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    int x3[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> x[i][j];
        }
    };

    int **x4 = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        x4[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> x[i][j];
        }
    }
}

const int M = 3;
const int N = 3;

int _2Darray_as_external(int arr[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int searchingElement(int arr[][3], int x)
{

    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Row: " << i << " column: " << j << endl;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "element is found!!!" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }
    return 0;
}

int spiral_order_matrix_traversal(int a[][3])
{
    int row_start = 0, row_end = 2, column_start = 0, column_end = 2;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for starting row
        for (int col = column_start; col <= column_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        row_start++;

        // for ending column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][column_end] << " ";
        }
        column_end--;

        // for ending row
        for (int col = column_end; col >= column_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;

        // for starting column
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][column_start] << " ";
        }
        column_start++;
    }
}

int matrix_transpose()
{
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // _2darray(3,4);
    // _2Darray_as_external(arr);
    // searchingElement(arr,3);
    // spiral_order_matrix_traversal(arr);

    return 0;
}
