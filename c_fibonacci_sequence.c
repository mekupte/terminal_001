#include <stdio.h>
/*First, let's add our library to use basic functions.
These functions will be required for basic input-output operations.*/

/* Let's define the variables we will use. */
int aySayisi, tavsanCiftiSayisi;
/* Let's define a function where we will calculate 
how many rabbit pairs there are for the entered month value with recursive. */
int fibonacci(int aySayisi){
    /* Eğer aySayisi 1 veya 2 ise direkt olarak 1 sayısını döndürelim. */
    if (aySayisi == 1 || aySayisi == 2)
        return 1;
    /* Değilse sondan bir önceki ay ve sondan iki önceki aydaki tavşan çifti sayısını toplayıp çıkan değeri
    döndürelim. */
    else
        return fibonacci(aySayisi-1) + fibonacci(aySayisi-2);
}


/* Ana fonksiyonumuzu tanımlıyoruz. */
int main() {
    /* Kullanıcının hesaplanacak değeri girmesi için ekrana bir talep cümlesi yazdıralım. */
    printf("Lütfen tavşan çifti sayısını bulmak istediğiniz ayı tam sayı cinsinden giriniz: ");
    /* Hesaplanacak değeri kullanıcıdan alıp "aySayisi" değişkenine atayalım. */
    scanf("%d",&aySayisi);
    /* Kullanıcıdan alınan değeri "fibonacci()" fonksiyonuna göndererek girilen ay değerinde kaç tavşan çifti olduğunu hesaplayalım. Bulduğumuz sonucu tavsanCiftiSayisi değişkeninde saklayalım. */
    tavsanCiftiSayisi = fibonacci(aySayisi);
    /* Bulduğumuz değeri ekrana yazdıralım. */
    printf("Tavsan sayısı= %d \n",tavsanCiftiSayisi);
    /* Programın hatasız sonlandırıldığını belirtmek için de "0" döndürelim. */
    return 0;
}
