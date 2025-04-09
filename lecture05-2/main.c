#include <stdio.h>
#include <windows.h>


void gotoxy(int x, int y) 
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main() 
    {
        gotoxy(10, 10);

        // 빨간색 텍스트

        printf("\033[31m이 텍스트는 빨간색이지롱.\033[0m\n");
        // 초록색 텍스트와 노란색 배경

        printf("\033[32m\033[43m이 텍스트는 초록색이고 배경은 노란색일까요?\033[0m\n");
        // 굵은 텍스트와 파란색 텍스트

        printf("\033[1m\033[34m이 텍스트는 굵고 파란색이 아닐뻔 했지만 결국 파란색입니다.\033[0m\n");

        return 0;

    }



