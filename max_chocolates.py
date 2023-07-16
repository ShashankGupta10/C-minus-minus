# You have x Rs with you. You go to a shop and the shopkeeper tells you the price as y Rs per chocolate.
#  He also tells you that you can get chocolate in return for z wrappers.
#  How many maximum chocolates you can eat? 


def maxChocolates(x, y, z):
    wrappers = x//y
    chocolates_from_wrappers = wrappers // z   
    
    return (wrappers + chocolates_from_wrappers)

print(maxChocolates(20, 3, 5))