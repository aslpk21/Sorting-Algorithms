import numpy as np
import time

max_val = 10000

def random_array():
    return np.random.randint(0, 1000000, size=max_val)

def main():
    A = np.sort(random_array())  
    B = -np.sort(-random_array())  
    C = random_array()
    D = random_array()
    E = random_array()
    F = random_array()
    G = random_array()
    H = random_array()
    I = random_array()
    Z = random_array()

    start = time.time()
    np.sort(A)
    np.sort(B)
    np.sort(C)
    np.sort(D)
    np.sort(E)
    np.sort(F)
    np.sort(G)
    np.sort(H)
    np.sort(I)
    np.sort(Z)
    end = time.time()
    time_taken = (end - start) * 1000
    print("Time:", time_taken)

if __name__ == "__main__":
    main()
