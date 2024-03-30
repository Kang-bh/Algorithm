
n = int(input())


for i in range(n):
    player_list = {}
    player_cnt = int(input())
    for j in range(player_cnt) : 
        player_price, player_name = input().split()
        player_price = int(player_price)

        player_list[player_name] = player_price
    player_list = dict(sorted(player_list.items(), key=lambda item : item[1]))
    dict_keys = list(player_list.keys())
    print(dict_keys[-1])