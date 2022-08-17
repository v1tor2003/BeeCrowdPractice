# S Sequence I

def sequence(X):
    divider = 1.0
    S = 0.0
    for i in range(0, X):
        S += (1.0/divider)
        divider+=1
    return S

x = 100
result = sequence(x)
print("%.2f" % result)