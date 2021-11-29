# 演習 2-a
# 配列a の位置i が空いているものとして、
# 位置i より前にあるx より大きい要素を(位置i を埋めるように)1 つずつ後ろに詰めて行き、最終的な空きの位置を返すメソッド shiftlarger(a, i, x) を作りなさい
# (すべての値が xより大きければ全部詰めて位置0番が空くので0を返す)。

# x = a[i]
# xより大きい値を後ろ方向にずらして，xを空きに入れる

def shiftlarger(a, i, x)
    # 最後に移動させたa[j]の(元の)位置 = ans
    ans = i

    # iは探索終わりの位置なので，代わりにjを1ずつ動かす
    j = i

    # 後ろからずらさないといけない(Tx p86)ので，stepじゃなくてwhileでjを動かす
    # 後ろから前にずらすから，jの初期値はiで，0になるまで続ける
    while j >= 0
        # a[j]がxより大きいときの処理
        if a[j] > x
            a[j + 1] = a[j]
            ans = j
        end

        # jを1減らす
        j -= 1
    end

    # 最終的にxが入る位置を[出力 + 値を返す]
    puts(ans)
    return ans
end

# 教科書の例でテストする関数
def test()
    a = [18, 13, 12, 20, 14]
    a[shiftlarger(a, 1, 13)] = 13
    print(a)
    puts
    a[shiftlarger(a, 2, 12)] = 12
    print(a)
    puts
    a[shiftlarger(a, 3, 20)] = 20
    print(a)
    puts
    a[shiftlarger(a, 4, 14)] = 14
    print(a)
    puts
end

test

# 課題 2-b
# 上記を呼び出しながら単純挿入法で配列を整列するメソッドinsertionsort(a)を書きなさい。
# 正しく動作することを確認すること。

def insertionsort(a)
    # iを1 からa.length-1 まで変化させながら繰り返し、
    0.step(a.length - 1) do |i|
        # x ← a[i]。
        x = a[i]

        # k ← {a のi 番目以前でx より大な値をずらしていき、最終的にx が入る位置を返す。}
        k = shiftlarger(a, i, x)

        # a[k] ← x。
        a[k] = x
        # 繰り返し終わり
    end
end

def test2()
    a = [18, 13, 12, 20, 14]
    insertionsort(a)
    print(a)
    puts
end

test2
