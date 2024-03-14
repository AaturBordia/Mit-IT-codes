test_list = [1, 4, 5, 4, 1]
print("The original list is : " + str(test_list))
reverse = test_list[::-1]
res = test_list == reverse
print("Is list Palindrome : " + str(res))
