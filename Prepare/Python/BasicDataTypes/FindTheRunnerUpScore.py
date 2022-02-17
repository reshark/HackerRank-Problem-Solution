if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    
    result = -101
    listArr = list(arr)
    maxValue = max(listArr)
    for i in listArr:
        if i != maxValue and i > result :
            result = i
            
    print(result)
