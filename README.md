# [push_swap] Push swap 

<br/>

- 이 것은 만점이 아닌 쉬운 버전의 push swap 입니다.

<br/>

<br/>

# 문제 이해하기

<br/>

- 좋은 사이트

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

- 간단하게 말하면 2개의 저장공간을 이용해서 정렬을 시켜주는 문제 입니다.
- 1. 인자를 받아와서 배열에 저장
  2. 배열로 check 요소 check
  3. 배열을 double linked list로 만들기
  4. ra, rb, pa, pa 등등등 만들기
  5. 요소 개수에 따라 정렬하기

<br/>

## 해야할 일

<br/>

### 1. 인자 받아오기

- 문자열로 받아 올수 있어야 합니다.

  - 
    
    ```shell
    ./push_swap "3 4 5" 0 1 "2 7 8"
    ./push_swap 3 4 5 0 1 2 7 8
    =>
    	3	
    	4
    	5
    	0
    	1
    	2
    	7
    	8
    	_	_
    	a	b
    ```

- #### < 설명 >

- 인자를 받아와서 배열(int_arr)에 저장

  - ```python
    for (argc 개수):
    	split해준 배열
        if (split해준 배열 내부 인자 개수 > 2)
        	for (split 해준 배열 내부 인자 개수)
            	split 해준 배열 내부 인자를 long long 형태로 바꿔준다
                (long long인 이유 -> int를 넘어서는 숫자도 파악하기 위해)
                int_arr에 저장
        else
        	split 해준 배열 내부 인자를 long long 형태로 바꿔준다
            (long long인 이유 -> int를 넘어서는 숫자도 파악하기 위해)
            int_arr에 저장
    ```

<br/>

## 2. 배열로 요소 check

<br/>

#### 1. 숫자가 아닌 것이 인자로 들어오는 경우

```shell
./push_swap 2 one 34 5
=> Error
```

<br/>

#### 2. 같은 인자가 들어가는 경우

<br/>

```shell
./push_swap 0 2 3 2
=> Error
```

<br/>

#### 3. 인자가 int 범위 내에 들어가지 않는 수인 경우

```shell
./push_swap 2147483648 2
=> Error
./push_swap -2147483649 2
=> Error
```

 <br/>

#### 4. 인자가 안들어오는 경우

```shell
./push_swap 
=> 아무것도 출력이 되면 안됩니다.
```

<br/>

#### 5. 인자가 순서대로 들어오는 경우

```shell
./push_swap 0 1 2 3 4 5
=> 아무것도 출력이 되면 안됩니다.
```

<br/>

### 3. (double) linked list or array 선택 => stack 만들기

- 저는 double linked list로 했습니다.
  - node를 만들어서 stack을 제작했습니다.
  - pop, pop_last, push, push_last를 만들어서 제작했습니다. (주의 꼼꼼하지 않으면 망;;;;)

<br/>

### 4. ra, rb, rr, pa, pb ... 만들기

<br/>

- 요거는 .pdf 파일보고 만들면 됩니다.

<br/>

### 5. 정렬 하기 ( 2개짜리 + 3개짜리 + 5개짜리 + 2분할)

<br/>

#### - 3개 짜리

  - 다 써보면 얼마 안됩니다. 여기서 

    저는 최대 최소 값을 지정해서 sa(), rra(), ra()를 했습니다.

<br/>

#### - 5개 짜리

  - 3개 짜리로 만드는 것이 목표입니다.

    => b stack으로 가장 큰수와 가장 작은 수 2개를 넘겨주어서 3개 정렬 후 2개를 다시 넘겨줍니다.
    
    ```python
    for (a 노드 개수)
    	if (a 노드 값 == max || a 노드 값 == min)
        	pa()
        else
        	ra()
    3개짜리 정렬()
    b stack에서 a stack으로 다시 넘겨주기
    ```

<br/>

#### - 2분할

<br/>

- pivot을 정해서 pivot을 기준으로 재귀를 돌려가며 정렬하는 형식입니다.
- 범위를 쪼개가면서 재귀를 해줍니다.=> merge sort

```python
a->b(cnt)
	if (cnt == 1)
    	return
    elif (cnt == 2)
    {
        2개 정렬();
        return
    }
	a stack 에서 cnt 개수 중 a_pivot 찾기
    for (cnt 개수)
    {
        if (a의 top > a_pivot)
        	ra()
        	ra 개수 += 1;
        else
        	pb()
        	pb 개수 += 1;
    }
    # ra()넘겨 줬던 값들 다시 앞으로 넘겨주기
    for (ra 개수 만큼)
    	rra()
     a->b(ra 개수)
     b->a(pb 개수)
        
# ----------------------------------

b->a(cnt)
	if (cnt == 1)
    	# 마지막에 b에는 남아있는 인자가 있으면 안됩니다.
        pa()
    b stack에서 cnt 개수 중 b_pivot 찾기
    for (cnt 개수)
    {
        if (a의 top < b_pivot)
        	rb()
        	rb 개수 += 1;
       	else
        	pa()
        	pa 개수 += 1;
    }
    for (rb 개수 만큼)
    	rrb()
    a->b(pa 개수)
    b->a(rb 개수)
```

