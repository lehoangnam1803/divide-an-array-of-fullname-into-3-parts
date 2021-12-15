// cau 5 
// nhap ho va ten 
// chuyen thanh 3 chuoi ho, ten dem, ten rieng

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main ()
{
    char hoten[30];
    int i;
    printf("Nhap vao ho va ten: "); gets(hoten);
    int space =0;
    for (i=0; i<strlen(hoten)-1; i++)
    {
        if (hoten[i] == 32)
        
            space ++;
    }
    
    int cnt=0;
    int ho=0;
    int dem=0;
    int ten=0;
    for (i=0; i<strlen(hoten); i++)
    {
        if (hoten[i] ==32)
            cnt ++;
        
        if (cnt ==0) // chua gap khoang trang dau tien
        {
            if(ho==0) // chua in 
            {    
                printf("\nHo: %c", hoten[i]);
                ho++;
            }
            else 
                printf("%c", hoten[i]);
        }
        else if (cnt >0 && cnt <space) // giua khoang trang dau tien va cuoi cung
        {
            if(dem==0) // chua in 
            {    
                printf("\nTen dem: %c", hoten[i]);
                dem++;
            }
            else 
                printf("%c", hoten[i]);
            
        }
        else if (cnt == space)
        {
            if(ten==0) // chua in 
            {    
                printf("\nTen rieng: %c", hoten[i]);
                ten++;
            }
            else 
                printf("%c", hoten[i]);
        }
    }
}
