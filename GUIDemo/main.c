
#include <stdlib.h>
#include <stdio.h>
#include "GUI.h"
#include "GUIDEMO.h"
extern const GUI_FONT GUI_FontHZ12;
extern const GUI_FONT GUI_FontHZ16;
extern const GUI_FONT GUI_FontHZ24;
int main(int argc, char* argv[])
{ 
   char c;
  printf("this is ucgui-linux test!\n");

  GUI_Init();
  GUI_SetBkColor(GUI_BLUE);
  GUI_Clear();
  GUI_SetColor(GUI_WHITE);
  GUI_SetTextAlign(GUI_TA_HCENTER);
  GUI_SetFont(&GUI_Font16B_ASCII);
  GUI_DispStringAt("hello world, ucgui-linux",240,100);
  GUI_DrawCircle(100,100,50);//
  GUI_SetFont(&GUI_FontHZ12);
  GUI_DispStringAt("你好啊，世界。中文显示12X12 GB2312",0,150);
  GUI_SetFont(&GUI_FontHZ16);
  GUI_DispStringAt("你好啊，世界。中文显示16x16 GB2312",0,170);
  GUI_SetFont(&GUI_FontHZ24);
  GUI_DispStringAt("你好啊，世界。中文显示24X24 GB2312",0,200);
  printf("system pause\n");
  //while ((c = getchar()) != '\n');
  GUIDEMO_main();
  GUI_DispStringAt("hello world, ucgui-linux",240,100);
  GUI_DrawCircle(100,100,50);//
  GUI_SetFont(&GUI_FontHZ12);
  GUI_DispStringAt("你好啊，世界。中文显示12X12 GB2312",0,150);
  GUI_SetFont(&GUI_FontHZ16);
  GUI_DispStringAt("你好啊，世界。中文显示16x16 GB2312",0,170);
  GUI_SetFont(&GUI_FontHZ24);
  GUI_DispStringAt("你好啊，世界。中文显示24X24 GB2312",0,200);
  printf("system pause\n");	
  system("pause");
  return 0;
}
