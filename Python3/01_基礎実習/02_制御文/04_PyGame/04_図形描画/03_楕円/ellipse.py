"""
【Summary】
楕円を描画させる。

"""

#【program】

import sys # システムモジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT, Rect

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing ellipse") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((255, 255, 255)) # 画面を全て白で塗潰す
        
        pygame.draw.ellipse(SCREEN, (255, 0, 0), (50, 50, 140, 60)) # 赤楕円
        pygame.draw.ellipse(SCREEN, (255, 0, 0), (250, 30, 90, 90)) # 赤楕円
        pygame.draw.ellipse(SCREEN, (0, 255, 0), (50, 150, 110, 60), 5) # 緑楕円
        pygame.draw.ellipse(SCREEN, (0, 255, 0), ((250, 130), (90, 90)), 20) # 緑楕円
        
        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()


"""
【考察】
ellipse メソッドで楕円を描画できる、

ellipse(Surface, color, Rect, width = 0) -> Rect

surface : 描画対象となる画像(Surface オブジェクト)
color : 色
Rect : 楕円に外接する矩形の位置とサイズ
width : 線の幅(省略すると塗潰しになる)

"""
