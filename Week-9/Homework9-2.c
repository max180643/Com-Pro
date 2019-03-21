#include <stdio.h>

int main(){
    char message[101];
    scanf("%s", message);

    char *begin_ptr = message;
    char *end_ptr = message;
    while(*end_ptr != '\0') {
    // ขยับตำแหน่ง Address 1 Byte จนกว่าจะเจอ \0
        end_ptr++;
    }
    end_ptr--; // ย้อนกลับ 1 Byte (ไม่สนใจ \0)

    // Pointer ของ begin_ptr จะชี้อยู่ที่หน้าสุดของ message
    // Pointer ของ end_ptr จะชี้อยู่ที่หลังสุดของ message (ไม่ใช่ \0)
    // จากนั้นสิ่งที่ต้องทำต่อคือ สลับค่าเพื่อให้ข้อความย้อนกลับ และปริ้นผลลัพธ์จากตัวแปร message

    while (end_ptr > begin_ptr) {
        char temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;
        begin_ptr++;
        end_ptr--;
    }
    printf("%s", message);
    return 0;
}