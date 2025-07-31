#include <stdio.h>

int main() {
    // กำหนดค่าตัวแปรตามโจทย์
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // แสดงค่าตัวแปรทั้งหมด
    printf("ค่า a = %d\n", a);
    printf("ค่า b = %d\n", b);
    printf("ค่า c = %.1f\n", c);
    printf("ค่า d = %.1f\n", d);

    // ผลลัพธ์ของ d + a
    printf("ผลของ d + a = %.1f\n", d + a);

    // ผลลัพธ์ของ a - b
    printf("ผลของ a - b = %d\n", a - b);

    // ผลลัพธ์ของ c * d
    printf("ผลของ c * d = %.1f\n", c * d);

    // ผลลัพธ์ของ a * c
    printf("ผลของ a * c = %.1f\n", a * c);

    // ผลลัพธ์ของ c / d
    printf("ผลของ c / d = %.2f\n", c / d);

    // ผลลัพธ์ของ b / c
    printf("ผลของ b / c = %.2f\n", b / c);

    // ผลลัพธ์ของ a % b (หารเอาเศษ)
    printf("ผลของ a %% b = %d\n", a % b);

    // ผลลัพธ์ของ c % a (ถ้าใช้กับ float จะ error ต้องแปลงเป็น int ก่อน)
    printf("ผลของ c %% a = %d\n", ((int)c) % a);

    // ผลลัพธ์ของ c % d (float หารเอาเศษไม่ได้ ต้องแปลงเป็น int ก่อน)
    printf("ผลของ c %% d = %d\n", ((int)c) % ((int)d));

    return 0;
}
