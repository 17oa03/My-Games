"""
【Summary】
多角形を描画させる。

"""

#【program】

import sys # システムモジュールのインポート
from math import sin, cos, radians # math モジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing polygon") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((0, 0, 0)) # 画面を全て白で塗潰す

        pointlist0, pointlist1 = [], []
        for theta in range(0, 360, 72):
            rad = radians(theta)
            pointlist0.append((cos(rad) * 100 + 100, sin(rad) * 100 +150))
            pointlist1.append((cos(rad) * 100 + 300, sin(rad) * 100 +150))

        pygame.draw.lines(SCREEN, (255, 255, 255), True, pointlist0)
        pygame.draw.polygon(SCREEN, (255, 255, 255), pointlist1)

        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()

"""
【考察】
多角形(polygon)を描画できる、

polygon(Surface, color, pointlist, width = 0) -> Rect

surface : 描画対象となる画像(Surface オブジェクト)
color : 色
pointlist : 点のリスト
width : 線の幅

"""
