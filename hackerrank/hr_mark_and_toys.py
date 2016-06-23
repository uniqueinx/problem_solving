#author: uniqueinx
#hacker: Mark and Toys
def max_toys(prices, rupees):
    #Compute and return final answer over here
    prices.sort()
    answer = 0
    for p in prices:
        if rupees - p < 0:
            break
        rupees -= p
        answer += 1
    return answer

if __name__ == '__main__':
    n, k = map(int, raw_input().split())
    prices = map(int, raw_input().split())
    print max_toys(prices, k)
