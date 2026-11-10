#include <stdio.h>
#include <stdlib.h>

int main() {

    puts("===== Pemasukkan Nilai Ujian Mahasiswa =====\n");
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if(nilai >= 85 && nilai <= 100)
    {
        printf("Predikat A: (Luar Biasa)\n");
    }
    else if(nilai >= 70 && nilai < 85)
    {
        printf("Predikat B: (Baik)\n");
    }
    else if (nilai >= 60 && nilai < 70)
    {
        printf("Predikat C: (cukup)\n");
    }
    else
    {
        printf("Predikat D: (Remedial)\n");
    }

    puts("\n===== Sistem Rekapitulasi & Klasifikasi Nilai Kelas =====\n");
    int jumlh_mhs;
    int jumlh_mata_kuliah;
    int i;
    int j;

    printf("\nJumlah Mahasiswa: ");
    scanf("%d", &jumlh_mhs);

    printf("\nJumlah Mata Kuliah: ");
    scanf("%d", &jumlh_mata_kuliah);

    for(i=1; i<=jumlh_mhs; i++)
    {
        for(j=1; j<=jumlh_mata_kuliah; j++)
        {
        printf("\nMasukkan Nilai Mata kuliah ke-%d: \n", j);
        scanf("%d", &nilai);
            if(nilai>=85 && nilai<=100)
            {
                printf("\nPredikat Luar Biasa: A\n");
            }
            else if(nilai>=70 && nilai<85)
            {
                printf("\nPredikat Baik: B\n");
            }
            else if(nilai>=60 && nilai<70)
            {
                printf("\nPredikat Cukup: C\n");
            }
            else
            {
                printf("\nPredikat Remedial: D\n");
            }
        }
    }


}
