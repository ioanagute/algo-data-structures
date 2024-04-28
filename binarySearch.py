# binary search

# O(log n) runtime complexity
def binary_search(nums, target):
    
    left, right = 0, len(nums) - 1
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1


nums = input("Enter a sorted list of integers (separated by spaces): ").split()
nums = [int(num) for num in nums]
target = int(input("Enter the target number: "))


index = binary_search(nums, target)
if index != -1:
    print(index)
else:
    print(-1)
