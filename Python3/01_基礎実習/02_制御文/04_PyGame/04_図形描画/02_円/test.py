"""
【Summary】
画面を表示させる。

"""

#【program】

import sys # システムモジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT, Rect

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing shapes") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((255, 255, 255))

        pygame.draw.circle(SCREEN, (255, 0, 0), (50, 50), 20) # 赤で塗潰した丸
        pygame.draw.circle(SCREEN, (255, 0, 0), (150, 50), 20, 10) # 太線の赤丸
        pygame.draw.circle(SCREEN, (0, 255, 0), (50, 150), 10) # 緑丸
        pygame.draw.circle(SCREEN, (0, 255, 0), (150, 150), 20) # 緑丸
        pygame.draw.circle(SCREEN, (0, 255, 0), (250, 150), 30) # 緑丸

        pygame.display.update()
        FPSCLOCK.tick(3)

if __name__ == '__main__':
    main()


"""
【考察】
circle メソッドで円を描画できる、

circle(Surface, color, pos, radius, width = 0) -> Rect

surface : 描画対象となる画像(Surface オブジェクト)
color : 色
pos : 中心座標
radius : 半径
width : 線の幅(省略すると塗潰しになる)

"""
