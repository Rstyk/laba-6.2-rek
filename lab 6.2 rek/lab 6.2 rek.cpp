
#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}
double Serednia(int* r, const int size, int& minIndex, int& maxIndex, int i)
{
    if (i >= size) {
        return (minIndex + maxIndex)/2.;
    }

    if (r[i] > r[maxIndex]) {
        maxIndex = i;
    }

    if (r[i] < r[minIndex]) {
        minIndex = i;
    }
    return Serednia(r, size, minIndex, maxIndex, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i] << " ";
    if (i < size - 1)
        Print(r, size, i + 1);
    else
        cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int r[n];
    int Low = 1;
    int High = 30;
    int minIndex = 0;
    int maxIndex = 0;
    Create(r, n, Low, High, 0);
    Print(r, n, 0);
    cout << "Serednia: " << Serednia(r, n, minIndex, maxIndex, 0) << endl;

    return 0;
}
