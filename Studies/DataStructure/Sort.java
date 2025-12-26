public class Sort {
    // print the array
    public static void PrintArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // BUBBLE SORT
    public static void BubblesortAlgo(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // SELECTION SORT
    public static void SelectionSortAlgo(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int idx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[idx]) {
                    idx = j;
                }
            }
            int temp = arr[idx];
            arr[idx] = arr[i];
            arr[i] = temp;
        }
    }

    // INSERTION SORT
    public static void InserionSortAlgo(int arr[], int n) {
        for (int i = 1; i < n; i++) { // Start from the second element
            int key = arr[i];
            int j = i - 1;

            // Move elements of arr[0..i-1], that are greater than key, 
            // to one position ahead of their current position
            while (j >= 0 && arr[j] > key) { // Correct condition for insertion
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    // QUICK SORT 
    public static void QuickSortAlgo(int arr[], int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            QuickSortAlgo(arr, low, pi - 1);
            QuickSortAlgo(arr, pi + 1, high);
        }
    }

    public static int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low - 1); // index of smaller element
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // swap arr[i+1] and arr[high] (or pivot)
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    // MERGE SORT 
    public static void MergeSortAlgo(int arr[], int left, int right) {
        if (left < right) {
            // Find the middle point
            int mid = left + (right - left) / 2;

            // Sort first and second halves
            MergeSortAlgo(arr, left, mid);
            MergeSortAlgo(arr, mid + 1, right);

            // Merge the sorted halves
            merge(arr, left, mid, right);
        }
    }

    private static void merge(int arr[], int left, int mid, int right) {
        // Find sizes of two subarrays to be merged
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Create temporary arrays
        int L[] = new int[n1];
        int R[] = new int[n2];

        // Copy data to temp arrays L[] and R[]
        for (int i = 0; i < n1; ++i)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; ++j)
            R[j] = arr[mid + 1 + j];

        // Merge the temp arrays

        // Initial indexes of first and second subarrays
        int i = 0, j = 0;

        // Initial index of merged subarray
        int k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements of L[] if any
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Copy remaining elements of R[] if any
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }


    // Heap Sort
    public static void HeapSortAlgo(int arr[]) {
        int n = arr.length;

        // 1. Build a Max Heap (rearrange array)
        // We start from the last non-leaf node (n/2 - 1) and heapify backwards
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }

        // 2. One by one extract an element from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end (swap the maximum element with the last element)
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            // Call max heapify on the reduced heap (the remaining n-1 elements)
            heapify(arr, i, 0);
        }
    }

    // Function to heapify a subtree rooted with node i.
    // n is the size of the heap (which decreases in the second step of Heap Sort).
    private static void heapify(int arr[], int n, int i) {
        int largest = i; // Initialize largest as root
        int left = 2 * i + 1; // Left child index
        int right = 2 * i + 2; // Right child index

        // If left child is larger than root
        if (left < n && arr[left] > arr[largest]) {
            largest = left;
        }

        // If right child is larger than largest so far
        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }

        // If largest is not root
        if (largest != i) {
            // Swap the root (current i) with the largest element found
            int swap = arr[i];
            arr[i] = arr[largest];
            arr[largest] = swap;

            // Recursively heapify the affected sub-tree
            heapify(arr, n, largest);
        }
    }

    // MAIN FUNCTION
    public static void main(String[] args) {
        // array
        int arr[] = { 10, 80, 30, 90, 40, 50, 70 }; 

        // calculating size of array
        int n = arr.length;

        System.out.println("Original array :");
        PrintArray(arr, n);

       

        // calling insertion sort algo
        InserionSortAlgo(arr, n); 
        System.out.println("After Insertion sorting : ");
        PrintArray(arr, n);

        // Reset or re-initialize array if running multiple sorts on the same object is desired.
        // Let's use Quick Sort now.
        
        QuickSortAlgo(arr, 0, n - 1); 
        
        System.out.println("After Quick sorting : ");
        PrintArray(arr, n);

        // Call Merge Sort with the full range (0 to n-1)
        MergeSortAlgo(arr, 0, n - 1); 

        System.out.println("After Merge sorting : ");
        PrintArray(arr, n);

        HeapSortAlgo(arr);
        System.out.println("Sorted array:");
        PrintArray(arr , n );



    }
}
