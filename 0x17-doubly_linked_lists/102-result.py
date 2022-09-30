#!/usr/bin/python3
def largest_palindrome():
    largest = 0;
    for x in reversed(range(100, 1000)):
        for y in reversed(range(100, 1000)):
            print(x, y, x * y)
            if is_palindrome(x * y):
                largest = x * y
                print(x, y)
                return largest

def is_palindrome(num):
    str_num = str(num)
    for i in range(0, len(str_num)):
        if i < (len(str_num) / 2):
            if str_num[i] != str_num[-1-i]:
                return False

    return True
print(largest_palindrome());
