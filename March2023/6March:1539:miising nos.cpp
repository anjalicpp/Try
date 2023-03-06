 int lo = 0, hi = arr.size();
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] - mid > k) hi = mid;
        else lo = mid + 1;
    }
    return lo + k;
