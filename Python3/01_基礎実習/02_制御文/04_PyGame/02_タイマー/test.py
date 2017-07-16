"""
【プログラム概要】

"""

#【プログラム】

import sys
import pygame
from pygame.locals import QUIT

pygame.init()
SURFACE = pygame.display.set_mode((400, 300))
FPSCLOCK = pygame.time.Clock()

def main():
    sysfont = pygame.font.SysFont(None, 36)
    counter = 0 # カウンタ変数

    while True:
        for event in pygame.event.get(QUIT):
            if event.type == QUIT:
                pygame.quit()
                sys.exit()

        counter += 1 # カウンタ変数をインクリメント
        SURFACE.fill((0, 0, 0))
        count_image = sysfont.render
        ("count is {}".format(counter), True, (225, 225, 225))
        SURFACE.blit(count_image, (50, 50))
        pygame.display.update()
        FPSCLOCK.tick(10) # 1秒間に10フレーム描画

if __name__ == '__main__':
    main()

    
"""
【実行結果】

"""

"""
【考察】
メインループで、
カウンタ変数にインクリメントし、
その値を画面上に描画している。

"""
