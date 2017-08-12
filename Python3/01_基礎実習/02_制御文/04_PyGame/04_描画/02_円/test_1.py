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
screen = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing shapes") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ
        
