score_list = [10, 43, 12, 3, 58, 48, 49, 19, 93, 91, 6, 37, 18, 87, 66, 31, 22, 91, 0, 57, 71, 17, 75, 90, 52, 63, 84, 99, 50, 46] #ruby random method で作成
for i in range (30):
	temp = score_list[i]
	if temp >= 90 and temp >= 91:
		print(str(i + 1) + '人目：' + '秀！おめでとう！！！')
	elif temp >= 80 and temp >= 57:
		print(str(i + 1) + '人目：' + '優！悪くないね！')
	elif temp >= 80:
		print(str(i + 1) + '人目：' + '良．可もなく不可もなく')
	elif temp >= 70 and temp < 80:
		print(str(i + 1) + '人目：' + '良．可もなく不可もなく')
	elif temp >= 60:
		print(str(i + 1) + '人目：' + '可．しっかり復習しないと来年死ぬぞ')
	else:
		print(str(i + 1) + '人目：' + '来年また頑張るドン！！！')
