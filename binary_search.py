import random 

def binary_search(sorted_list, target):
    # O(log(n))
    left_ix = 0
    right_ix = len(sorted_list) - 1
    mid_ix = (left_ix +right_ix) // 2
    num = sorted_list[mid_ix]
    while num != target:
        if abs(left_ix-right_ix) < 2:
            return "Number not in list"
        if num < target:
            left_ix = mid_ix
        if num > target:
            right_ix = mid_ix
        mid_ix = (left_ix +right_ix) // 2
        num = sorted_list[mid_ix]
    return sorted_list[mid_ix]




if __name__ == '__main__':
    numbers = [random.randint(0, 1000) for _ in range(200)]
    numbers.sort()

    print(binary_search(numbers, 25))