# 🏃‍♂️ Console Star Escape (Yıldızlardan Kaçış)

Bu proje, C programlama dili ile geliştirilmiş, Windows konsolunda çalışan heyecanlı bir refleks oyunudur. Amaç, `0` karakterini kontrol ederek `*` (yıldız) engellerine çarpmadan haritanın sonuna ulaşmaktır.

## 🎮 Oynanış Mekaniği

Oyun, standart yön tuşlarının yanı sıra özel bir **"Runner" (Koşucu)** mekaniğine sahiptir:

* Karakteriniz `0` ile temsil edilir.
* Engeller `*` ile temsil edilir.
* **Özel Mekanik:** `D` tuşuna bastığınızda karakteriniz **otomatik olarak hızla sağa doğru ilerlemeye başlar.** Bu otomatik koşu sırasında reflekslerinizi kullanarak `W` ve `S` tuşlarıyla engellerden kaçmak için şerit değiştirmelisiniz.

## 🕹️ Kontroller

| Tuş | İşlev |
| :---: | :--- |
| **W** | Yukarı hareket et |
| **S** | Aşağı hareket et |
| **A** | Sola hareket et (Geri) |
| **D** | **HIZLI KOŞU MODU** (Sağa otomatik ilerler, bu sırada W/S ile yön verilebilir) |

## 🚀 Kurulum ve Çalıştırma

Bu oyun Windows kütüphanelerini (`Windows.h`, `conio.h`) kullandığı için **Windows işletim sistemi** gerektirir.

### 1. Derleme
Projeyi derlemek için GCC (MinGW) veya herhangi bir C derleyicisi kullanabilirsiniz.

```bash
gcc oyun.c -o oyun.exe
