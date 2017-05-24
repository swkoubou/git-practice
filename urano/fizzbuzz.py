#!/usr/bin/env python3

for i in range(1, 114514):
    if i % 15 == 0:
        print(f"{i} fizz buzz")
    elif i % 5 == 0:
        print(f"{i} buzz")
    elif i % 3 == 0:
        print(f"{i} fizz")
    else:
        print(i)
