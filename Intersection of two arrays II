int max(int* array, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        max = array[i] > max ? array[i] : max;
    }
    return max;
}

int* Counter(int* array, int size, int max) {
    // use calloc to fill the space with 0
    int* count = calloc(max + 1, sizeof(int));
    // here we should check if calloc fails or not
    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }
    return count;
}

int findIntersect(int* res, int* array1, int* array2, int maxValue) {
    int i = 0;
    for (int j = 0; j <= maxValue; j++) {
        int min = array1[j] < array2[j] ? array1[j] : array2[j];
        // min-- decreases min after check
        while (min-- > 0) {
            res[i] = j;
            i++;
        }
    }
    return i;
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    const int maxNums1 = max(nums1, nums1Size);
    const int maxNums2 = max(nums2, nums2Size);
    const int maxValue = maxNums1 > maxNums2 ? maxNums1 : maxNums2;
    int* cnt1 = Counter(nums1, nums1Size, maxValue);
    int* cnt2 = Counter(nums2, nums2Size, maxValue);

    const int maxSize = nums1Size > nums1Size ? nums1Size : nums2Size;
    // first allocate res to the maximum size of arrays (in case all intersect)
    int* res = malloc(maxSize * sizeof(int));
    // here we should check if malloc fails or not

    const int fitSize = findIntersect(res, cnt1, cnt2, maxValue);
    // realloc to smallest size to save space
    res = realloc(res, fitSize * sizeof(int));
    // here we should check if realloc fails or not
    (*returnSize) = fitSize;
    return res;
}

