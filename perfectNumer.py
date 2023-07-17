def is_divisible_by_all_digits(number):
    for digit in str(number):
        if int(digit) == 0 or number % int(digit) != 0:
            return False
    return True

def divisible_by_all_digits(numbers):
    result = [num for num in numbers if is_divisible_by_all_digits(num)]
    return result

numbers_array = [123, 405, 22, 126, 333, 500]
result_numbers = divisible_by_all_digits(numbers_array)
print(result_numbers)
