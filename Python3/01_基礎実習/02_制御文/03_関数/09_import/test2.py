"""
【プログラム概要】
必要な対象のみインポートをする。

"""

#【プログラム】

from random import randint
for _ in range(5):
    print(randint(0, 5))
print("END")
    
"""
【実行結果】
5
0
2
0
5
END

"""

"""
【考察】
from モジュール名 import 関数名

上記の記述で、
明示的に使用する関数を指定している。

for文の後の「_」は、
「変数を使わない」という意図を明示している。

"""
