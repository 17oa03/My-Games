"""
【Summary】
乱数で描画させる。

"""

#【program】

import sys # システムモジュールのインポート
import random # random モジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing random") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((0, 0, 0)) # 画面を全て白で塗潰す

        pointlist = []
        for _ in range(10):
            xpos = random.randint(0, 400)
            ypos = random.randint(0, 300)
            pointlist.append((xpos, ypos))
        pygame.draw.lines(SCREEN, (255, 255, 255), True, pointlist, 5)    

        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()

"""
【考察】
乱数で 10 個の点を生成し、
それらを線で結んで描画させる。

"""
