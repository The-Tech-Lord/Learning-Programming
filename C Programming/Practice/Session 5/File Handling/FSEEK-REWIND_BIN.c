#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char name[50];
    int age;
    char bloodType;
    float height;
} Person;

typedef struct BufferBuf {
    char name[50];
    int age;
    char bloodType;
    float height;
} BufferBuf;

int main() {
    char names[5][20] = {
        "Shintaro Kisaragi",
        "Tsubomi Kido",
        "Takane Enomoto",
        "Kousuke Seto",
        "Shuuya Kano"
    };
    int ages[] = { 15, 17, 16, 20, 19 };
    char bloodTypes[] = { 'A', 'B', 'A', 'C', 'E' };
    float heights[] = { 5.3, 6.7, 3.5, 3.8, 5.8 };

    FILE *fptr;
    if ((fptr = fopen("BIN-Files/File2.bin", "w")) == NULL) {
        printf("Error Opening File...");
        return 1;
    }
    Person Buffer;
    for (int i = 0; i < 5; i++) {
        strcpy(Buffer.name, names[i]);
        Buffer.age =  ages[i];
        Buffer.bloodType = bloodTypes[i];
        Buffer.height = heights[i];
        if ((fwrite(&Buffer, sizeof(struct Person), 1, fptr)) < 1) {
            printf("Error Writing to Bin File...");
            return 1;
        }
    }

    if ((freopen("BIN-Files/File2.bin", "r", fptr)) == NULL) {
        printf("Error Reopening Files for Read Mode...");
        return 1;
    }

    BufferBuf Buf;
    fseek(fptr, -sizeof(Buf), SEEK_END);
    for (int i = 0; i < 5; i++) {
        if ((fread(&Buf, sizeof(struct BufferBuf), 1, fptr)) < 1) {
            printf("Error Reading from Bin File...");
            return 1;
        }
        fseek(fptr, 2 * -sizeof(Buf), SEEK_CUR);
        printf("Name: %s\t  Age: %d\t Blood Type: %c\t Height: %.1f\n", Buf.name, Buf.age, Buf.bloodType, Buf.height);
    }
    fclose(fptr);
}