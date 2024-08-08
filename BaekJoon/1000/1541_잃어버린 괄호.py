import re

def plus_extract_nums(extract_exp: str):

    total_num = 0

    first_plus_index = extract_exp.find("+")

    if first_plus_index == -1:
        return int(extract_exp)
    else :
        total_num += int(extract_exp[:first_plus_index])
  
    pattern_with_plus = r"\+\d+"

    plus_matches = re.findall(pattern_with_plus, extract_exp)


    for ele in plus_matches:
        total_num += int(ele[1:])

    return total_num


def solve(exp: str):
    
    total_num = 0
    sum = 0

    prev_minus_index = 0


    while True:

        minus_index = exp.find("-", prev_minus_index)

        if minus_index == -1:
            extracted_str = exp[prev_minus_index:]
        else:
            extracted_str = exp[prev_minus_index:minus_index]

        if prev_minus_index == 0:
            total_num = plus_extract_nums(extracted_str)
        else:
            total_num -= plus_extract_nums(extracted_str)
        
        if minus_index == -1 :
            break

        prev_minus_index = minus_index + 1

    print(total_num)


if __name__ == "__main__":
    
    exp = input()

    solve(exp)

    