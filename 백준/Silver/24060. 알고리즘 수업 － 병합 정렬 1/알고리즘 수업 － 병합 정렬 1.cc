#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
int K;
int result = -1;

void merge(vector<int>& A, int left, int mid, int right) 
{
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (A[i] <= A[j]) temp.push_back(A[i++]);
        else temp.push_back(A[j++]);
    }
    while (i <= mid) temp.push_back(A[i++]);
    while (j <= right) temp.push_back(A[j++]);

    for (int t = 0; t < temp.size(); t++) 
    {
        A[left + t] = temp[t];
        cnt++;
        if (cnt == K) 
        {
            result = temp[t];
        }
    }
}

void mergeSort(vector<int>& A, int left, int right) 
{
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid + 1, right);
        merge(A, left, mid, right);
    }
}

int main() 
{
    int N;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    mergeSort(A, 0, N - 1);
    cout << result << endl;
    return 0;
}
