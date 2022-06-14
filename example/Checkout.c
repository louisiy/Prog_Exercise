#include <stdio.h>
#include <Windows.h>

int main(void){
  int a = 1;
  int Msg = a;
  HWND H = FindWindow(0,"我（George Hotz）");
  //HWND H = 0x000A03BE;
  SendMessage(H,WM_SETTEXT, 0, 0);
  SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);
  //HWND A = FindWindow(0,"1918班数学群");
  printf("%x",H);
  system("pause");
  return 0;
}
