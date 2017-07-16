"""
【Summary】
画面を表示させる。

"""

#【program】

import sys
import pygame
from pygame.locals import QUIT

pygame.init() # PyGameの初期化
SURFACE = pygame.display.set_mode((400, 300))
pygame.display.set_caption("Hello, Window!")

def main():
    while True:
        SURFACE.fill((255, 255, 255)) # ウィンドウの色変更

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        pygame.display.updata() # 描画内容を画面に反映

if __name__ == '__main__':
    main()
    
"""
【考察】
ウィンドウが画面上に表示された、
そこでのマウスの移動やクリック、
キーボード入力をイベントという。

イベントは発生後、
イベントキューに格納され、
溜まったイベントを順番に処理する、
この繰り返しをメインループと呼ぶ。

キュー(queue)とは待ち行列のこと。


"""
