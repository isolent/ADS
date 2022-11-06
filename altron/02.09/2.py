def vis ():
    n = int(input())
    if (n % 4 == 0 and n % 100 != 0 ):
        return True
    elif (n % 400 == 0):
        return True
    return False 

with open(r'C:/Users/user/.python/PP2/vis.txt', 'w') as fp:
    if (vis() == True):
        fp.write("True")
    else:
        fp.write("False")
