"""
【プログラム概要】
画面を表示させる。

"""

#【プログラム】

import pygame
from pygame.locals import *
import sys

SCREEN_SIZE = (800, 600) # 画面の大きさ


pygame.init() # Pygame初期化
screen = pygame.display.set_mode(SCREEN_SIZE) # SCREEN_SIZEの画面作成
pygame.display.set_caption("テスト") # タイトルバーの名前

while True: # メインループ
 screen.fill((0, 0, 255)) # 画面を青色にする。
 pygame.display.update() # 画面の更新

 for event in pygame.event.get(): # イベント処理
     if event.type == QUIT:
        sys.exit()
