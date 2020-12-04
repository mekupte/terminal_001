n=input('Lütfen tavşan çifti sayısını bulmak istediğiniz ayı tam sayı cinsinden giriniz:');
%Kullanıcının hesaplanacak değeri girmesi için ekrana bir talep cümlesi yazdıralım.
%Hesaplanacak değeri kullanıcıdan alıp 1x1 bir n matrisine atayalım 

%Hesaplanan her ayda kaç çift tavşan bulunduğu bilgisini bir a matrisinde saklayalım.
a(1)=1; 
a(2)=1; 
%Birinci ve ikinci aydaki tavşan sayısı için direkt olarak 1 sayısını döndürelim.

%Girilen ay değerine karşılık kaç tavşan çifti olduğunu hesaplayacağımız bir fonksiyon tanımlayalım.
%Döngünün üçüncü aydan itibaren girilen değere kadar birer birer artacak şekilde tüm ayları 
%hesaplaması için ":" kullanalım. Matrisin ikiden sonraki tüm 
%elemanları kendisinden iki önceki elemanın toplamı şeklinde hesaplansın.
for i=3:n
    a(i)=a(i-1)+a(i-2);
end

%Son olarak fprintf fonksiyonlarını kullanarak bulduğumuz bu değerleri ekrana yazdıralım.

fprintf("%d. aydaki tavşan sayısı: ",n);
fprintf("%d\n",a(i));