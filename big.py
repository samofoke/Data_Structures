import sys

# The max_number function checks for the biggest int in a given array
# in terms of agruments on the terminal.

def max_number(x):
    maximum = 0;

    for n in x:
        if n > maximum:
            maximum = n
    return maximum

print(max_number(int(x) for x in sys.argv[1:]))
