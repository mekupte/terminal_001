#include <stdio.h>
/* Öncelikle temel fonksiyonları kullanmak için kütüphanemizi ekleyelim. Bu fonskiyonlar temel girdi
çıktı işlemleri için gerekli olacak. */

/* Kullanacağımız değişkenleri tanımlayalım. */
int aySayisi, tavsanCiftiSayisi;
/* Girilen ay değerine karşılık kaç tavşan çifti olduğunu özyineleme (recursion) ile hesaplayacağımız bir
fonksiyon tanımlayalım. */
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