"""
【Summary】
矩形を描画させる。

"""

#【program】

import sys
import pygame
from pygame.locals import *
 
SCREEN_SIZE = (640, 480)
 
pygame.init()
screen = pygame.display.set_mode(SCREEN_SIZE)
pygame.display.set_caption("Drawing shapes")
 
while True:
    screen.fill((0,0,0))
    
    # Yellow:rectangle
    pygame.draw.rect(screen, (255,255,0), Rect(10,10,300,200))
    # Red:circle
    pygame.draw.circle(screen, (255,0,0), (320,240), 100)
    # purple:ellipse
    pygame.draw.ellipse(screen, (255,0,255), (400,300,200,100))
    # White line
    pygame.draw.line(screen, (255,255,255), (0,0), (640,480))
    
    pygame.display.update()
    for event in pygame.event.get():
        if event.type == QUIT:
            sys.exit()
