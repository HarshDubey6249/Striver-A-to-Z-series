#include <iostream>
#include <vector>
using namespace std;

int sort_fun(vector<int> &vec, int low, int high)
{
    int pivot = vec[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (i <= high - 1 && vec[i] <= pivot)
            i++;

        while (j >= low + 1 && vec[j] > pivot)
            j--;

        if (i < j)
        {
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[low], vec[j]);
    return j;
}
void QuickSort(vector<int> &vec, int low, int high)
{

    if (low < high)
    {
        int part_index = sort_fun(vec, low, high);
        QuickSort(vec, low, part_index - 1);
        QuickSort(vec, part_index + 1, high);
    }
}

int main()
{
    vector<int> vec = {3, 1, 2, 4, 1, 5, 2, 6, 4};

    int n = vec.size();

    cout << "Before Using Quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    QuickSort(vec, 0, vec.size() - 1);

    cout << "After Using Quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}