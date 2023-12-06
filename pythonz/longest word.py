# Number of rows in the pattern
num_rows = 5

# Construct the pattern using nested loops
for i in range(1, num_rows * 2):
    if i <= num_rows:
        for j in range(1, i + 1):
            print('*', end=' ')
    else:
        for j in range(1, 2 * num_rows - i + 1):
            print('*', end=' ')

    # Move to the next line after each row
    print()
