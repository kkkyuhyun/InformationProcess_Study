def func(lst):
    for i in range(len(lst)//2):
        lst[i],lst[i-1]=lst[-i-1],lst[i] #양쪽 끝 값을 swap 해준다고 생각하기 
        
lst=[1,2,3,4,5,6]
func(lst)
print(sum(lst[::2])-sum(lst[1::2]))

#len(lst) = 6, len(lst)//2=3(정수만)
