one = ["", "one ", "two ", "three ", "four ",
       "five ", "six ", "seven ", "eight ",
       "nine ", "ten ", "eleven ", "twelve ",
       "thirteen ", "fourteen ", "fifteen ",
       "sixteen ", "seventeen ", "eighteen ",
       "nineteen "];

ten = ["", "", "twenty ", "thirty ", "forty ",
       "fifty ", "sixty ", "seventy ", "eighty ",
       "ninety "];

hundred = ["", "one hundred ", "two hundred ", "three hundred ", "four hundred ",
           "five hundred ", "six hundred ", "seven hundred ", "eight hundred ",
           "nine hundred "];


def numToWords2(n, s):
    str = ""

    if (n < 999 and n >= 100):
        str += hundred[n // 100] + ten[(n // 10) % 10] + one[n % 10]
    elif (n < 100 and n > 19):
        str += ten[n // 10] + one[n % 10]
    else:
        str += one[n]

    if (n):
        str += s

    return str


def convertToWords(n):
    out = ""
    out += numToWords2((n // 1000000000), "arab ")

    out += numToWords2((n // 10000000 % 100), "crore ")

    out += numToWords2(((n // 100000) % 100), "lakh ")

    out += numToWords2(((n // 1000) % 100), "thousand ")

    out += numToWords2(((n // 100) % 10), "hundred ")

    if (n > 100 and n % 100):
        out += "and "

    out += numToWords2((n % 100), "")

    return out


def convertToWords2(n):
    out = ""

    out += numToWords2((n // 1000000000), "billion ")

    out += numToWords2(((n // 1000000) % 1000), "million ")

    out += numToWords2(((n // 1000) % 1000), "thousand ")

    out += numToWords2(((n // 100) % 10), "hundred ")

    if (n > 100 and n % 100):
        out += "and "

    out += numToWords2((n % 100), "")

    return out


n = int(input("Enter no upto 12 digit to convert into Indian no System : "))
print(convertToWords(n))

n1 = int(input("Enter no upto 12 digit to convert into American no System : "))
print(convertToWords2(n1))