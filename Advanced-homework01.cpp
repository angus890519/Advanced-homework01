/* 計算機概論實務-進階練習作業-作業1 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/09 01:31 */  
#include <stdio.h> //函示庫 
#include <stdlib.h> //函示庫 
/* 
ASCII碼 
十進位 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90
圖形    A  B  C  D  E  F  G  H  I  J  K  L M   N  O  P  Q  R  S  T  U  V  W  X  Y  Z
十進位 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122
圖形    a  b  c  d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z
*/ 
int main() 
{
	char az; //定義顯示的十進位數(字串) 
	for (az=65; az<=90; az++)  //依序顯示上表65-90 
	{
		printf("%c ",az);
	}
	
	printf("\n");  //換行 
	for (az=97; az<=122; az++) //依序顯示上表97-122  
	{
		printf("%c ",az);
	}
	printf("\n");//換行 
	system ("pause"); //暫停 
	return 0; //回傳值 0 
}

