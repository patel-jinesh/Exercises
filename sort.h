template<typename T>
void swap(T * const a, T * const b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

template<typename T>
void sort(T arr[], int n, bool (*compare)(const T, const T)) {
    for (int i = 0; i < n - 1; i++) {  
        int min_idx = i;

        for (int j = i + 1; j < n; j++)  
            if (compare(arr[j], arr[min_idx]))
                min_idx = j;  
  
        swap<T>(&arr[min_idx], &arr[i]);
    }
}