def find_factors(number):
    factors = []
    for i in range(1, number + 1):
        if number % i == 0:
            factors.append(i)
    return factors
user_input = int(input("Enter a number: "))
result = find_factors(user_input)
print("The factors of", user_input, "are:", result)
