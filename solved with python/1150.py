# Exceeding Z

def exceeds_Z(X, Z):
    sum = 0
    counter = 0
    while Z <= X:
        Z = int(input())
    for i in range(X, Z):
        sum += X
        X+=1
        counter+=1
        if sum > Z:
            break
    print(counter)

X = int(input())
Z = int(input())

exceeds_Z(X, Z)