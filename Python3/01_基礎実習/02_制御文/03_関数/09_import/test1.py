"""
【プログラム概要】
モジュールのインポートをする。

"""

#【プログラム】

import random
for _ in range(5):
    print(random.randint(0, 5))
print("END")
    
"""
【実行結果】
4
2
5
4
2
END

"""

"""
【考察】
モジュール名を関数名の前に付与することで、
関数名の衝突を防いでいる。

"""
