#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef float Artirma;

#define MAX_MUSTERI_SAYISI 10

struct musteri {
    int musteri_no;
};

// Müşteri teklifleri ve açık artırma işlemi
float acikarttirma(int teklifveren_no, Artirma musteri_bid) {
    printf("%d numarali musterimiz %.2fTL veriyor arttiran var mi yoksa satiyorum!\n", teklifveren_no, musteri_bid);
    return 0;
}

int main(void) {
    srand(time(NULL));

    struct musteri mus[MAX_MUSTERI_SAYISI];

    // Müşteri numaralarını atama
    for (int i = 0; i < MAX_MUSTERI_SAYISI; i++) {
        mus[i].musteri_no = i + 1;
    }

    int baslangic_fiyati = rand() % 100 + 20;
    int maksimum_fiyat = baslangic_fiyati * 3; // Başlangıç fiyatının 3 katı, maksimum teklif limitini belirler

    printf("Acilis fiyatimiz %dTL\n", baslangic_fiyati);

    int kazanan = 0; // Kazanan müşterinin numarası
    while (1) {
        int teklif_veren_no = rand() % MAX_MUSTERI_SAYISI + 1;

        // Yeni teklif, başlangıç ve maksimum fiyat arasında rastgele oluşturulur
        Artirma musteri_bid = rand() % (maksimum_fiyat - baslangic_fiyati) + baslangic_fiyati;

        if (musteri_bid > baslangic_fiyati) {
            acikarttirma(teklif_veren_no, musteri_bid);
            baslangic_fiyati = musteri_bid; // Yeni teklif, en son teklifi günceller
            kazanan = teklif_veren_no; // Yeni teklif veren, şu anki kazanan olur
        } else {
            printf("Arttirilan fiyat daha onceki fiyati gecemedi. Satisi gerceklestiriyorum!\n");
            break; // Yeni teklif, belirtilen limiti geçemezse döngüyü sonlandırır
        }
    }

    printf("Acik arttirmayi %d nolu musterimiz kazanmistir!\n", kazanan);

    return 0;
}
