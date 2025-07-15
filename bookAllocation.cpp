
bool isPossibleSolution(vector<int>& arr, int n, int m, int mid) {
    int studentcnt = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentcnt++;
            if (studentcnt > m || arr[i] > mid) {
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // create search space 0 -> sum of all books
    // Write your code here.
    
    if(m > n) {
        return -1;
    }

    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int end = sum;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2; // Calculate mid accurately

        if (isPossibleSolution(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}