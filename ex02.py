def calculator(calc):
    digit = "0123456789"
    num = []


    while x < len(calc):
        g = 0
        temp = 0
        while calc[x+g] in digit:
            g += 1
            num[x] = calc[x] + calc[x+g]*10^g
            del calc[x+g]
        x = x+g+1

test = "12+"



        


        

    