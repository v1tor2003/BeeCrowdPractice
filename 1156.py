# S Sequence II

def sequence(limit):
    above = 3.0
    divider = 2.0
    S = 1.0
    
    while int(above) <= limit:
        S += (above/divider)
        above += 2
        divider *=2
    return S

limit = 39
result = sequence(limit)
print("%.2f" % result)