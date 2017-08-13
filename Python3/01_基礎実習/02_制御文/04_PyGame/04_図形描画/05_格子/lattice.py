"""
【Summary】
格子を描画させる。

"""

#【program】

import sys # システムモジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT, Rect

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing lattice") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((0, 0, 0)) # 画面を全て白で塗潰す

        for xpos in range(0, 400, 25):
            pygame.draw.line(SCREEN, 0xFFFFFF, (xpos, 0), (xpos, 300)) # 白縦線

        for ypos in range(0, 300, 25):
            pygame.draw.line(SCREEN, 0xFFFFFF, (0, ypos), (400, ypos)) # 白横線

                
        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()


"""
【考察】
line メソッドで線を描画できる、

line(Surface, color, start_pos, end_pos, width = 1) -> Rect

surface : 描画対象となる画像(Surface オブジェクト)
color : 色
closed : 最初の点を最後の点を結ぶか否か
pointlist : 点のリスト
width : 線の幅

"""
