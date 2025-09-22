#include <stdio.h> 

int main() {
    int n, i; // ตัวแปรจำนวนเต็ม n = จำนวนนักเรียน, i = ตัวนับลูป
    float score, sum = 0, avg; // score = คะแนน, sum = ผลรวม, avg = ค่าเฉลี่ย

    printf("Enter number of students: "); // ใส่จำนวนนักเรียน
    scanf("%d", &n); // รับค่ามาเก็บใน n

    printf("Enter %d student scores (one per line):\n", n); // กรอกคะแนน
    for(i = 1; i <= n; i++) { // วนลูป i=1 ถึง n
        printf("Score %d: ", i); // กรอกคะแนนของคนที่เท่าไร
        scanf("%f", &score); // รับค่าคะแนนมาเก็บใน score
        sum += score; // บวกคะแนนเข้า sum
    }

    avg = sum / n; // คำนวณค่าเฉลี่ย

    printf("\nNumber of students = %d\n", n); // แสดงจำนวนนักศึกษา
    printf("Average score = %.2f\n", avg); // แสดงค่าเฉลี่ย ทศนิยม 2 ตำแหน่ง

    return 0;
}
