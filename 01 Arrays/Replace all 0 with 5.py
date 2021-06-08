# Function should return an integer value
def convertFive(n):
    n_str = str(n)
    result = ""
    for i in n_str:
        if(i=="0"):
            result = result + "5"
        else:
            result = result + i
    return result