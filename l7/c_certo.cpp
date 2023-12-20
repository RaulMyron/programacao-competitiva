#include <iostream>
#include <vector>
using namespace std;

long long count;

int array1[200001];
int array2[200001];

void mergesort(int *array, int len, int offset)
{
    if (len > 1)
    {
        int *first = array1 + offset;
        if (first == array)
            first = array2 + offset;
        
        for (int i = 0; i < len; ++i)
            first[i] = array[i];
        
        int firstLength = len / 2;
        int secondStart = firstLength, secondLength = len - secondStart;
        int *second = first + secondStart;
        
        mergesort(first, firstLength, offset);
        mergesort(second, secondLength, offset + secondStart);
        
        int i = 0, j = 0;
        int pos = 0;
        
        int currentCost = count;
        
        while (i < firstLength && j < secondLength)
        {
            if (first[i] < second[j])
                array[pos++] = first[i++];
            else
            {
                array[pos++] = second[j++];
                count += firstLength - i;
            }
        }
        
        for (int currentPosition = 0; i < firstLength; ++i, ++currentPosition) {
            array[currentPosition] = first[i];
        }

        for (int currentPosition = 0; j < secondLength; ++j, ++currentPosition) {
            array[currentPosition] = second[j];
        }

    }
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> array1[i];
    
    mergesort(array1, N, 0);
    
    if (count%2 == 0)
        cout << "Carlos" << endl;
    else
        cout << "Marcelo" << endl;

    return 0;
    
}