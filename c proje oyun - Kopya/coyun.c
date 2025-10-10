#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>

#define satir 20 // haritanýn ölçüleri
#define sutun 150

int SATIR = 3; // oyun karakterinin baþlayacaðý konumu belirler
int SUTUN = 0;
int i, j, h,bolumsecimi;

void haritayiGoster(char matris[satir][sutun]) {
    for (i = 0; i < satir; i++) {
        for (h = 0; h < sutun; h++) {
            printf("%c", matris[i][h]);
        }
        printf("\n");
    }
}








int main() {
    char matris[satir][sutun] = {
        "**************************************************************************************************************",
        "     *                *             *           *   *            *          *              *          *      |",
        "     *                *             *           *   *            *          *              *          *      |",
        "           *     *        *              *                  *         *          *     *       *             |",
        "           *     *        *              *            *     *         *          *     *       *             |",
        "**************************************************************************************************************"
    };

    while (1) {
        system("CLS"); // ekran temizleme
        matris[SATIR][SUTUN] = '0'; // oyun karakteri

        haritayiGoster(matris);

        char yon = _getch();
        matris[SATIR][SUTUN] = ' '; 

        switch (yon) { // yön tuþlarý
            case 'D': case 'd':
                for (j = 0; j < 108; j++) {
                    if (SUTUN < sutun - 1) {
                        // Karakterin yeni konumunu kontrol et
                        if (matris[SATIR][SUTUN + 1] == '*') { // Eðer yýldýzlardan birine deðerse oyunun bitmesi için yazýlan komut
                            system("CLS");
                            printf("Kaybettiniz\n");
                            return 0;
                        }

                        SUTUN += 1; // Yeni konumu güncelle
                        system("CLS"); // Ekraný temizle
                        matris[SATIR][SUTUN] = '0'; // Yeni konumu güncelle

                        haritayiGoster(matris); 

                        if (_kbhit()) { 
                            yon = _getch();
                            if (yon == 'W' || yon == 'w') {
                                if (SATIR > 0 && matris[SATIR - 1][SUTUN] != '*') {
                                    SATIR -= 1;
                                    
                                   
                                }
                            } else if (yon == 'S' || yon == 's') {
                                if (SATIR < satir - 1 && matris[SATIR + 1][SUTUN] != '*') {
                                    SATIR += 1;
                                }
                            }
                        }

                        

                        if (SUTUN >= sutun - 1) {
                            system("CLS");
                            printf("Kazandiniz!\n");
                            return 0;
                        }
                        matris[SATIR][SUTUN] = ' ';
                    }
                }
                break;
            case 'A': case 'a':
                if (SUTUN > 0) {
                    if (matris[SATIR][SUTUN - 1] == '*') {
                        system("CLS");
                        printf("Kaybettiniz\n");
                        return 0;
                    }
                    SUTUN -= 1;
                }
                break;
            case 'W': case 'w':
                if (SATIR > 0) {
                    if (matris[SATIR - 1][SUTUN] == '*') {
                        system("CLS");
                        printf("Kaybettiniz\n");
                        return 0;
                    }
                    SATIR -= 1;
                }
                break;
            case 'S': case 's':
                if (SATIR < satir - 1) {
                    if (matris[SATIR + 1][SUTUN] == '*') {
                        system("CLS");
                        printf("Kaybettiniz\n");
                        return 0;
                    }
                    SATIR += 1;
                }
                break;
        }

        if (matris[SATIR][SUTUN] == '*') { // Eðer yýldýzlardan birine deðerse oyunun bitmesi için yazýlan komut
            system("CLS");
            printf("Kaybettiniz\n");
            break;
        }

       if (SUTUN== 108) { // Eðer yýldýzlardan birine deðerse oyunun bitmesi için yazýlan komut
            system("CLS");
            printf("KAZANDINIZ\n");
            break;
        }
    }

    return 0;
}


