
"""
【プログラム概要】
モジュールの読み込みをする。

"""

#【プログラム】

print("test01 start")
print("__name__ = {}".format(__name__))

def main():
    print("main executed")
    
if __name__ == '__main__':

    main()
    
"""
【実行結果】
___main__\test01.py 
test01 start
__name__ = __main__
main executed

"""

"""
【考察】
関数が実行されるのは、
関数を呼び出したタイミングになる。

pythonでは、
import命令で他のモジュールを読み込む、
呼び出す側、呼び出される側の2種類があるということ。

「__name__」という変数がある、
自身がプログラムを開始したファイルの場合、
この変数には「__main__」という値がセットされている、
この値を見れば、
呼び出す側、呼び出される側がわかる仕掛けになっている。

import ...
初期化コード
　関数、クラス定義、広域変数宣言など...
def main():
...メインルーチン
if __name__ == '__main__':
    main()

"""
