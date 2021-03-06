"""
【Summary】
矩形を描画させる。

"""

#【program】

import sys
import pygame
from pygame.locals import QUIT, Rect

SCREEN_SIZE = (400, 300)

pygame.init()
SCREEN = pygame.display.set_mode(SCREEN_SIZE)
pygame.display.set_caption("Drawing shapes")
FPSCLOCK = pygame.time.Clock()

def main(): # メイン関数

    while True: # 無限ループ
        
        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        # White surface
        SCREEN.fill((255, 255, 255))
        # Red:rectangle
        pygame.draw.rect(SCREEN, (255, 0, 0), (10, 20, 100, 50))
        # Red:rectangle
        pygame.draw.rect(SCREEN, (255, 0, 0), (150, 10, 100, 30), 3)
        # Green:rectangle
        pygame.draw.rect(SCREEN, (0, 255, 0), ((100, 80), (80, 50)))
        # Blue:rectangle Rect object
        rect0 = Rect(200, 60, 140, 80)
        pygame.draw.rect(SCREEN, (0, 0, 255), rect0)
        # Yellow:rectangle Rect object
        rect1 = Rect((30, 160), (100, 50))
        pygame.draw.rect(SCREEN, (255, 255, 0), rect1)
    
        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()


"""
【考察】
Rect objectは、
PyGameで矩形(位置とサイズ)を指定する際に
使用するクラスになる。

Rect objectの作成は、

Rect (left, top, width, height)

left   = x座標
top    = y座標
width  = 幅
height = 高さ

になる。

Rectは矩形(Rectangle)を表し、
rectは矩形を描画する、
間違いに注意！

surface = サーフィス、描画対象になる画面
width = 線の幅、省略時は塗潰し。
color = 色

"""
