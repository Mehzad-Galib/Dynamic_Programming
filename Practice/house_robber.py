nums = [2, 7, 9, 3, 1]

n = len(nums)

for i in range(2, len(nums)):
    nums[i] += nums[i-2]


print(max(nums))
