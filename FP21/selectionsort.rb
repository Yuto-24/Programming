# 演習 1-a
# 最も小さい値が入っている位置が分かる
# ポジションの"値"が欲しい
def arrayminrange(a, i, j)
    min = a[i]
    pos = i

    # a.each_index do |i|
    i.step(j) do |k|
        if min > a[k]
            min = a[k]
            pos = k
        end
    end
    return pos
end

# aのi番目とj番目を入れ替える
# aの配列を入れ替えてくれれば，値は要らない
def swap(a, i, j)
    x = a[i]
    a[i] = a[j]
    a[j] = x
end

# 課題 1-b
def selectionsort(a)
    # i を0からa.length - 2 まで変化させながら繰り返し
    0.step(a.length - 2) do |i|
        # kにiから，配列の最後(a[0]スタートだから，len - 1)までの最小値を代入
        k = arrayminrange(a, i, a.length - 1)

        # 最小値がある場所と，現時点での先頭を入れ替え
        # 現時点っていうのは，stepで毎回変わるから
        swap(a, i, k)
        # print(a)
    end
    print(a)
end
