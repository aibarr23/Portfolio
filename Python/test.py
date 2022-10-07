from datetime import datetime
from datetime import date

# datetime object containing current date and time
now = datetime.now()
 
print("now =", now)

# dd/mm/YY H:M:S
dt_string = now.strftime("%d/%m/%Y %H:%M:%S\n")
print("date and time =", dt_string)	

today = date.today()

# dd/mm/YY
d1 = today.strftime("\n%d/%m/%Y")
print("d1 =", d1)

# Textual month, day and year	
d2 = today.strftime("%B %d, %Y")
print("d2 =", d2)

# mm/dd/y
d3 = today.strftime("%m/%d/%y")
print("d3 =", d3)

# Month abbreviation, day and year	
d4 = today.strftime("%b-%d-%Y")
print("d4 =", d4)

global total
total = 50

def func1():
    # global total
    total = 55
    
    total += 1
    print("total =", total)
    return total
func1()
print("total =", total)
