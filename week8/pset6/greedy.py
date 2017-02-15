import cs50

while True:
    print("How much change do you have?")
    change = cs50.get_float()
    if change > 0:
        break
    
change *= 100.0
converted = int(round(change))

quarter_count = converted // 25
leftover = converted % 25
    
dime_count = leftover // 10
leftover = leftover % 10
    
nickel_count = leftover // 5
leftover = leftover % 5
    
coin_count = quarter_count + dime_count + nickel_count + leftover

print("{}".format(coin_count))
    
