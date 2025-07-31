#include <stdio.h>

int main() {
    // กำหนดค่าเริ่มต้นตัวแปร
    double x = 12.0;
    int y = 7, z = 12, a = 5; // สมมติ a = 5
    double total = 100.0, price = 20.0, quantity = 3.0, discount = 15.0;
    double rate = 5.0;
    int score = 80, penalty = 2, mistake = 3;

    // 1. x = x - 4.0;  -> ใช้นิพจน์ย่อ
    x -= 4.0; // ลดค่า x ลง 4.0 เท่ากับ x = x - 4.0

    // 2. x = 6.5 * x;  -> ใช้นิพจน์ย่อ
    x *= 6.5; // คูณค่า x ด้วย 6.5

    // 3. x = x % (y + z * a);  -> ใช้นิพจน์ย่อ
    // เนื่องจาก % ใช้กับ int เท่านั้น จึงแปลง x เป็น int
    x = (int)x % (y + z * a); // คำนวณเศษจากการหาร

    // 4. x = x / (2.0 * x);  -> ใช้นิพจน์ย่อ
    x /= (2.0 * x); // หาร x ด้วย 2 เท่าของ x

    // 5. total = total + (price * quantity - discount);  -> ใช้นิพจน์ย่อ
    total += (price * quantity - discount); // บวกค่ารวมเข้า total

    // 6. x = x * (1 + rate / 100);  -> ใช้นิพจน์ย่อ
    x *= (1 + rate / 100); // คูณ x ด้วย (1 + อัตราร้อยละ)

    // 7. score = score - (penalty * (mistake + 1));  -> ใช้นิพจน์ย่อ
    score -= (penalty * (mistake + 1)); // ลบคะแนนตามโทษ

    // แสดงผลลัพธ์
    printf("x = %.2f\n", x);
    printf("total = %.2f\n", total);
    printf("score = %d\n", score);

    return 0;
}
