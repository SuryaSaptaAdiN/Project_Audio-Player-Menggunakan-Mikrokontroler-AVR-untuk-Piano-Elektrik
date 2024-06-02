# Audio Player Menggunakan Mikrokontroler AVR untuk Piano Elektrik 
## Workshop Mikrokonroler // D3 Teknik Elektronika A // <a href="https://www.pens.ac.id/" target="_blank">Politeknik Elektronika Negeri Surabaya</a>
DOSEN PENGAMPU : Akhmad Hendriawan ST, MT  
NIP. 197501272002121003

<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/About%20Project/cover.jpeg" alt="Poster">

DIBUAT OLEH:
| No.  | Nama  | NRP  | Status  |
| :------------: | :------------: | :------------: | :------------: |
| 1  | Surya Sapta Adi Nugraha  | 2122500014  | Project Manager  |
| 2  | Abimanyu Fajar Ramadhan  | 2122500008  | Designer Hardware  |
| 3  |  Abdullah Hanafi Salim  | 2122500010  |  Programmer |
| 4  |  Gusma Kemal Pasha |  2122500011 | PCB Maker |
| 5  |  Salsabillah Whita Rosa | 2122500022  |  Audio Editor |
| 6  | Hambali Ahmad  |  2122500027 | Dokumenter  |

## Daftar Isi
- [Deskripsi](#Deskripsi)
- [Fitur](#Fitur)
- [Alat & Bahan](#Alat-&-Bahan)
  - [Daftar Alat Software](#Daftar-Alat-Software)
  - [Daftar Alat dan Bahan Hardware](#Daftar-Alat-dan-Bahan-Hardware)
- [Konsep Kerja](#Konsep-Kerja)
  - [Blok Diagram](#Blok-Diagram)
  - [Cara Kerja](#Cara-Kerja)
- [Detail Proyek](#Detail-Proyek)
  - [PCB](#PCB)
    - [Desain Skematik Shield Arduino](#Desain-Skematik-Shield-Arduino)
    - [Desain Shield PCB](#Desain-Shield-PCB)
    - [Desain Sistem Proyek](#Desain-Sistem-Proyek)
    - [Video Desain PCB](#Video-Desain-PCB)
    - [Hasil Gambar PCB](#Hasil-Gambar-PCB)
  - [3D Kemasan Proyek](#3D-Kemasan-Proyek)
    - [Desain 3D Case Arduino](#Desain-3D-Case-Arduino)
    - [Video Pembuatan Desain 3D](#Video-Pembuatan-Desain-3D)
    - [Foto 3D](#Foto-3D)
  - [Program](#Program)
    - [Convert Audio ke File RAW](#Convert-Audio-ke-File-RAW)
    - [Video Convert Audio](#Video-Convert-Audio)
    - [Simulasi Program](#Simulasi-Program)
    - [Video Simulasi](#Video-Simulasi)
    - [Realisasi Program](#Realisasi-Program)
- [Dokumentasi Proyek dan Team](#Dokumentasi-Proyek-dan-Team)
  
## Deskripsi
Proyek digital audio player adalah sebuah sistem yang memungkinkan pembangkitan dan pemutaran sinyal audio melalui mikrokontroler AVR. Dalam Proyek ini membuat alat musik piano elektrik yang mampu mengisi waktu luang dengan memainkan alat musik dan memudahkan pengguna untuk membawa piano elektrik ini. Output audio yang dibangkitkan dikeluarkan ke speaker aktif untuk memastikan kualitas suara yang baik.

## Fitur
- Pembangkitan sinyal audio melalui mikrokontroler AVR.
- Tombol push button untuk memainkan nada tertentu.
- Output audio dikeluarkan ke speaker aktif.

## Alat & Bahan
### Daftar Alat Software
1. Visual Studio Code
2. Github
3. Git
4. Autodesk Fusion 360
5. Eagle
6. Wokwi
### Daftar Alat dan Bahan Hardware
| No.  | Nama Barang  | Jumlah  |
| :------------: | :------------: | :------------: |
| 1  | Arduino ATmega 2560  | 1x  |
| 2  | Push Button  | 8x  |
| 3  |  Switch  | 1x  |
| 4  |  Switch 3 pin |  1x |
| 5  |  Speaker | 1x  |
| 6  | Baterai 9V  |  1x |
| 7  | Resistor 220ohm |  1x |

## Konsep Kerja
### Blok Diagram
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/About%20Project/Block%20diagram.png" alt="Blok Diagram">

### Cara Kerja
Proyek Audio Player untuk Piano Elektrik ini beroperasi dengan menggunakan mikrokontroler AVR sebagai pusat pengendalian. Sumber daya untuk proyek ini disediakan oleh baterai 9V, yang alirannya dapat diatur melalui saklar ON/OFF. Mikrokontroler ini terhubung ke berbagai komponen lainnya. Ada delapan push button, setiap tombol ini berfungsi untuk memainkan nada yang berbeda pada piano elektrik. Terdapat switch tiga pin sebagai pergantian mode nada piano elektrik. Pada mode I (kiri) mengeluarkan nada rendah, pada mode 0 (tengah) mengeluarkan nada normal, dan II (kanan) akan mengeluarkan nada tinggi. Selain itu, ada port input audio yang diberi label “JACK IN” yang akan menghubungkan mikrokontroler dengan speaker eksternal. Speaker ekternal digunakan untuk menghasilkan suara piano. Dengan demikian, proyek ini menciptakan sistem pemutar audio ketika ditekan yang dapat memainkan seperti suara piano.

## Detail Proyek
### PCB
#### Desain Skematik Shield Arduino
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/PCB/schematic.jpg" alt="Desain Skematik">
Detail desain skematik dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/PCB" target="_blank">Design Schematic</a>

#### Desain Shield PCB
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/PCB/board.jpeg" alt="Desain Board">
Detail desain shield PCB dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/PCB" target="_blank">Design Board & Manufacturing</a>

#### Desain Sistem Proyek
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/Simulation/simulasi.jpeg" alt="Sistem Proyek">
Detail desain skematik dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/Simulation" target="_blank">Design Sistem</a>

#### Video Desain PCB

#### Hasil Gambar PCB
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/PCB/back%20pcb.jpeg" alt="PCB">
Detail hasil desain PCB dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/PCB" target="_blank">Pict PCB</a>

### 3D Kemasan Proyek
#### Desain 3D Case Arduino
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/3D%20Package/Display%20github.png" alt="Desain 3D">
Detail desain untuk case arduino dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/3D%20Package" target="_blank">Design Package</a> atau <a href="https://www.thingiverse.com/thing:6646377" target="_blank">Thingiverse</a>

Keterangan Ukuran:
- Panjang bagian bawah 172mm
- Lebar bagian bawah 96mm
- Tinggi bagian bawah 17mm
- Panjang bagian atas 168mm
- Lebar bagian atas 62mm
- Tinggi bagian atas 8mm
- lubang jack 10mm

#### Video Pembuatan Desain 3D

Tutorial pembuatan desain 3D untuk pengemasan alat proyek dapat dilihat pada link berikut:
<a href="https://www.youtube.com/watch?v=R6Fa050dKPA" target="_blank">Video Tutorial by Abimanyu</a>

#### Foto 3D
<img src="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/blob/main/3D%20Package/ALL%20IN.jpeg" alt="Desain 3D">

Detail foto untuk kemasan dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/3D%20Package" target="_blank">Pict Package</a>

### Program
#### Convert Audio ke File RAW
Data dari semua tuts piano yang telah dicovert menjadi file RAW dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/Tuts%20Piano" target="_blank">All Audio Piano</a>.

#### Video Convert Audio
#### Simulasi Program
Simulasi dapat dilihat pada: <a href="https://wokwi.com/projects/398312099364933633" target="_blank">Wokwi Simulation</a>.

Detail dari simulasi dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/Simulation" target="_blank">Simulation Github</a>.
#### Video Simulasi
Simulasi dari program melalui software wokwi dapat dilihat pada link berikut:
<a href="https://youtu.be/XzKsaTkORDI?si=tM6pIqVIvMEymQc2" target="_blank">Video Simulation Wokwi by Surya & Hanafi</a>

Simulasi alat piano dapat dilihat pada video berikut:

https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/assets/168740916/93c877ef-d919-4c5d-9aa7-36d04b013b71

#### Realisasi Program
## Dokumentasi Proyek dan Team
https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/assets/168740916/ee1586a2-95dd-4360-ae75-e725f54b5b29

https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/assets/168740916/f328bb08-1285-4355-9b0a-1f4d35c735a2

Detail selengkapnya mengenai dokumentasi yang berhubungan dengan proyek atau seputar team dapat dilihat pada: <a href="https://github.com/SuryaSaptaAdiN/Project_Audio-Player-Menggunakan-Mikrokontroler-AVR-untuk-Piano-Elektrik/tree/main/About%20Project" target="_blank">About Project</a>
