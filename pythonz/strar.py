
num_rows = 5

for i in range(1, num_rows * 2):
    if i <= num_rows:
        for j in range(1, i + 1):
            print('*', end=' ')
    else:
        for j in range(1, 2 * num_rows - i + 1):
            print('*', end=' ')
    print()
