def arrayminrange(a, i, j)
    min = a[i]
    pos = i
    i.step(j) do |k|
        if min > a[k]
            min = a[k]
            pos = k
        end
    end
    return pos
end

def swap(a, i, j)
    x = a[i]
    a[i] = a[j]
    a[j] = x
end

def selectionsort(a)
    0.step(a.length - 2) do |i|
        k = arrayminrange(a, i, a.length - 1)
        swap(a, i, k)
    end
end

def shiftlarger(a, i, x)
    ans = i
    j = i
    while j >= 0
        if a[j] > x
            a[j + 1] = a[j]
            ans = j
        end
        j -= 1
    end
    return ans
end

def insertionsort(a)
    0.step(a.length - 1) do |i|
        x = a[i]
        k = shiftlarger(a, i, x)
        a[k] = x
    end
end

def test_sort()
    count = 0
    n = 10
    while n < 100_000
        printf("n: %d\n", n)
        m = 1
        while m <= 3
            if m == 1
                puts('1st')
            elsif m == 2
                puts('2nd')
            else
                puts('3rd')
            end
            a1 = Array.new(n) { rand 100 }
            a2 = a1

            # Selection
            t1_1 = Process.times.utime
            selectionsort(a1)
            t1_2 = Process.times.utime
            print('selection_sort time: ')
            puts(t1_2 - t1_1)

            # Insert
            t2_1 = Process.times.utime
            insertionsort(a2)
            t2_2 = Process.times.utime
            print('insert_sort time: ')
            puts(t2_2 - t2_1)
            m += 1
        end

        # nを[2/5]倍
        if count % 2 == 0
            n *= 5
        else
            n *= 2
        end
        count += 1
		puts()
    end
end

test_sort
