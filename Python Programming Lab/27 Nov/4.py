def merge_sort(a, low, high):
    if low == high:
        return
    mid = (low + high) // 2
    merge_sort(a, low, mid)
    merge_sort(a, mid + 1, high)
    merge(a, low, mid, high)

def merge(a, low, mid, high):
    temp = []
    left = low
    right = mid + 1
    
    while left <= mid and right <= high:
        if a[left] <= a[right]:
            temp.append(a[left])
            left += 1
        else:
            temp.append(a[right])
            right += 1
    
    while left <= mid:
        temp.append(a[left])
        left += 1
    
    while right <= high:
        temp.append(a[right])
        right += 1
    
    for i in range(low, high + 1):
        a[i] = temp[i - low]
                
    
if __name__ == "__main__":
   input = [4, 1, 3, 5, 2]
   merge_sort(input, 0, 4)
   print(input)
   