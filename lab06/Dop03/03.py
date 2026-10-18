def sumint():
    total = 0
    for name, value in globals().items():
        if type(value) is int:
            total += value
    return total
