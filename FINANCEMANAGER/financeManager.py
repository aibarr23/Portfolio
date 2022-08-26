import csv
import gspread

MONTH = 'may' 

file = f"hsbc_{MONTH}.csv"

transactions = []

SUBSCRIPTION_NAMES = {"Adobe Creative Cloud", "Audible UK adbl.co/pymt VIS"}

sum = 0

def hsbcFin(file, SUBSCRIPTION_NAMES):

    with open(file, mode='r') as csv_file:
        csv_reader = csv.reader(csv_file)
        for row in csv_reader:
            date = row[0]
            name = row[1]
            amount = float(row[2])
            sum += amount
            category = 'other'
            if name == "H3G DD":
                category = 'PHONE BILL'
            if "ADOBE" in name:
                name = "Adobe Creative Cloud"
            if "Audible" in name:
                name = "Audible"
            if name in SUBSCRIPTION_NAMES:
                category = 'SUBSCRIPTION'
            transaction = ((date, name, amount, category))
            print(transaction)
            transactions.add(transaction)
        return transactions

sa = gspread.service_account()
sh = sa.open("Personal Finances")

wks = sh.worksheet(f"{MONTH}")

rows = hsbcFin(file, SUBSCRIPTION_NAMES)

wks.insert_row([1, 2, 3], 10)