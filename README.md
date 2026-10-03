# 🔴🟢 Alternating LED Blink with Pause

> **Arduino Project #11** — LEDان أحمر وأخضر يومضان بالتناوب 10 مرات ثم يطفيان 5 ثواني

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يتحكم بـ LEDين (أحمر وأخضر) باستخدام حلقة `for`:

- يومض LED الأحمر (pin 13) وLED الأخضر (pin 12) بالتناوب — كل واحد 250ms
- تتكرر الدورة **10 مرات** باستخدام `for loop`
- بعد انتهاء الـ 10 دورات، يطفيان كلاهما ويدخل البرنامج في توقف **5 ثواني**
- ثم تبدأ الدورة من جديد

---

## 🔌 Circuit

```
Arduino UNO
                    ┌──────────────┐
                    │              │
  pin 13 ──[220Ω]──┤► (LED أحمر)  │── GND
                    │              │
  pin 12 ──[220Ω]──┤► (LED أخضر)  │── GND
                    │              │
                    └──────────────┘
```

| المكون | التوصيل |
|--------|---------|
| LED أحمر | الساق الطويلة → مقاومة 220Ω → pin 13 / الساق القصيرة → GND |
| LED أخضر | الساق الطويلة → مقاومة 220Ω → pin 12 / الساق القصيرة → GND |

---

## 💡 Concepts Used

- `pinMode()` — تحديد pin كـ OUTPUT
- `digitalWrite()` — تشغيل وإطفاء LED
- `delay()` — التحكم بتوقيت الوميض
- `for loop` — تكرار الوميض 10 مرات بشكل منظم
- **التناوب بين LEDين** — واحد يشتغل والثاني يطفى في نفس اللحظة

---

## 📊 Behavior

| المرحلة | pin 13 (أحمر) | pin 12 (أخضر) | المدة |
|---------|--------------|--------------|-------|
| الخطوة 1 (×10) | HIGH 🔴 | LOW ⚫ | 250ms |
| الخطوة 2 (×10) | LOW ⚫ | HIGH 🟢 | 250ms |
| التوقف | LOW ⚫ | LOW ⚫ | 5000ms |
| تكرار... | — | — | — |

---

## 🔗 Code

```cpp
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, 0);
    delay(250);
    digitalWrite(13, LOW);
    digitalWrite(12, 1);
    delay(250);
  }
  digitalWrite(12, LOW);
  delay(5000);
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل الدائرة كما في الرسم (LED أحمر على pin 13 ، LED أخضر على pin 12)
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. راقب الـ LEDين يومضان بالتناوب 10 مرات ثم يطفيان 5 ثواني

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
