def fibonacci(aySayisi):
    #Eğer aradığımız aylar iki veya ikiden küçük ise direkt olarak 1 çift tavşanın bulunduğunu kabul edelim.
    if <= 2:
        return 1
    else:
        return fibonacci(aySayisi-1) + fibonacci(aySayisi-2)
        

#Kullanıcıdan bir girdi alalım. Bunun için input() fonksiyonunu kullanıyoruz.
#Aldığımız girdiyi tam sayıya çevirelim ve aySayisi değişkenine atayalım.
aySayisi = int(input("Lütfen tavşan çifti sayısını bulmak istediğiniz ayı tam sayı cinsinden giriniz: "))

#Yazdığımız fonksiyonu çağıralım ve fonksiyonun döndürdüğü cevabı ekrana yazdıralım.
print("Tavşan Sayısı: ",fibonacci(aySayisi))


# Burada döndürdüğümüz cevabı yeni bir değişkene atamadık.
#Dilersek örneğin tavşan sayısını bir değişkene atayıp o değişkenin sahip olduğu değeri ekrana yazdırabiliriz.
#tavsanSayisi=fibonacci(aySayisi)
#print(tavsanSayisi)