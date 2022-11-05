#include <iostream>
using namespace std;

int N, K;
int arr[500000];
int tmp[500000];
int count = 0;

void merge(int p, int q, int r);
void merge_sort(int p, int r){
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q+1, r);
        merge(p, q, r);
    }
}

void merge(int p, int q, int r) {
    int i = p;
    int j = q + 1;
    int t = 0;
    while (i < q + 1 && j < r + 1) {
        if (arr[i] <= arr[j]) {
            tmp[t] = arr[i];
            i++; t++;
        } else {
            tmp[t] = arr[j];
            j++; t++;
        }
    }
    while (i < q + 1) {
        tmp[t] = arr[i];
        i++; t++;
    }
    while (j < r + 1) {
        tmp[t] = arr[j];
        j++; t++;
    }

    i = p;
    t = 0;
    while(i < r+1){
        arr[i] = tmp[t];
        count++;
        if (count == K) {
            cout << arr[i] << endl;
        }
        i++; t++;
    }
}

int main () {

    cin >> N >> K;

    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[i] = num;
    }


    merge_sort(0, N-1);
    if (count < K)
        cout << -1 << endl;


    return 0;
}