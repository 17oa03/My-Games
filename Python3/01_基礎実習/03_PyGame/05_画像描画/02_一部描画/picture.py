"""
【Summary】
画像の一部分を表示させる。

"""

#【program】

import sys # システムモジュールのインポート
from math import sin, cos, radians # math モジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT, Rect

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing picture") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    logo = pygame.image.load("test.jpg")

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((255, 255, 255)) # 画面を全て白で塗潰す

        SCREEN.blit(logo, (0, 0)) # コピー先.blit(コピー元, (10, 10))
        SCREEN.blit(logo, (250, 50), Rect(50, 50, 100, 100)) 

        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()

"""
【考察】
blit の引数に領域を指定することで、
元の画像の一部分だけを描画することも可能。


"""
