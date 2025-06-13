// Day9 --> 13/06/2025
// Kth smallest element in an array --> Gfgs

class Solution {
public:
    void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) res[k++] = a[i++];
            else res[k++] = b[j++];
        }
        while (i < a.size()) res[k++] = a[i++];
        while (j < b.size()) res[k++] = b[j++];
    }

    void mergeSort(vector<int>& v) {
        int n = v.size();
        if (n == 1) return;
        int n1 = n / 2, n2 = n - n1;
        vector<int> a(n1), b(n2);
        for (int i = 0; i < n1; i++) a[i] = v[i];
        for (int i = 0; i < n2; i++) b[i] = v[i + n1];

        mergeSort(a);
        mergeSort(b);
        merge(a, b, v);
    }

    // Updated signature as per GfG test driver
    int kthSmallest(vector<int>& arr, int k) {
        mergeSort(arr);
        return arr[k - 1];
    }
};
