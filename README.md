# Açık Artırma Simülasyonu

Bu projede C programlama dili kullanılarak basit bir açık artırma simülasyonu oluşturulmuştur. Bu README dosyası, projenin çalışma mantığını, kullanılan yapıları ve açık artırma ile oyun teorisi arasındaki ilişkiyi açıklamaktadır.

## Projeyi Oluşturan Yapılar ve Tanımlamalar

- **`struct musteri`**: Her müşterinin bir numarasını saklamak için kullanılan yapı.
- **`typedef float Artirma`**: Teklifleri tutmak için kullanılan veri tipi tanımı.

## İşaretçiler ve Kullanımı

Projede işaretçi kullanımı özel olarak ele alınmamıştır. Ancak, işaretçiler C dilinde bellek yönetimi ve veri yapısı oluşturma gibi önemli konularda kullanılan kritik yapısal unsurlardır.

## Açık Artırma ve Oyun Teorisi İlişkisi

Açık artırma, oyun teorisinin pratik bir uygulama alanlarından biridir. Oyun teorisi, oyuncular arasındaki stratejik etkileşimleri inceleyen bir matematiksel modelleme alanıdır. Açık artırma, farklı oyuncuların kendi çıkarlarını optimize etmeye çalıştığı bir senaryoyu temsil eder. Özellikle en yüksek teklifi vermek için oyuncuların stratejilerini ve fiyatları nasıl etkilediğini incelemek, oyun teorisi açısından önemli bir konudur.

Bu ilişki, açık artırma sürecindeki oyuncuların stratejik kararlarını ve fiyatlandırma dinamiklerini anlamak için oyun teorisi kavramlarını kullanabilir. Örneğin, katılımcıların stratejilerini optimize etmek için Nash dengesi gibi kavramlar kullanılabilir. Aynı zamanda açık artırma, oyuncuların kazançlarını artırmak için stratejik hamleler yapmaları gereken bir oyun olarak da görülebilir.

Açık artırma ve oyun teorisi ilişkisi üzerine yapılan çalışmalar, hem ekonomi alanında hem de matematiksel modelleme ve stratejik karar alma üzerine yapılan araştırmalarda geniş bir uygulama alanı bulmuştur.

## Açık Artırma Simülasyonunun Kullanımı

Bu program, C dilinde yazılmıştır ve basit bir açık artırma senaryosunu simüle eder. Projeyi kullanmak için C derleyicisine ihtiyaç vardır. Projeyi derleyip çalıştırdığınızda, rastgele tekliflerle bir açık artırma süreci simüle edilir ve sonunda kazanan müşteri belirtilir.
