def solution(price, grade):
    answer = 0
    discount = {"S":5, "G":10, "V":15}
    answer = price - int(price * discount[grade] / 100)
    return answer
