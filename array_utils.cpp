#include "array_utils.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Завдання 1: аналіз одновимірного масиву
void task1_array(const string filename) {
    ifstream fin(filename);
    ofstream fout("array_out.txt", ios::app);

    int n;
    fin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++)
        fin >> arr[i];

    // Вивід всіх парних елементів у зворотньому порядку
    fout << "Even elements in reverse: ";
    int countEven = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (int(arr[i]) % 2 == 0) {
            fout << arr[i] << " ";
            countEven++;
        }
    }
    fout << "\nNumber of even elements: " << countEven << "\n";

    cout << "Task 1 completed. Check array_out.txt\n";

    fin.close();
    fout.close();
}

// Завдання 3: сортування бульбашкою
void task3_bubble_sort(const string filename) {
    ifstream fin(filename);
    ofstream fout("array_out.txt", ios::app);

    int n;
    fin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++)
        fin >> arr[i];

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    fout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";
    fout << "\n";

    cout << "Task 3 completed. Check array_out.txt\n";

    fin.close();
    fout.close();
}
