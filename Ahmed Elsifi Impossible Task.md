## 🕵️ **Ahmed Elsifi Impossible Task**

**The Mission:**
Build a **"Personalized Life Manager" CLI app** in pure **C (or C++)** that combines _data storage, calculations, conditions, loops, pointers, arrays, structs, enums, unions, and standard libraries_.

---

### **Features to Implement**

1. **User Registration (Strings, Chars, Enums, Structs)**

   - Ask the user for their full name, age, gender (enum), and height/weight.
   - Store everything in a `struct`.
   - Use an `enum` for gender (`MALE, FEMALE`).

2. **Health & Fitness Tracker (Functions, Math.h, Floats)**

   - Calculate **BMI** and print if underweight, normal, overweight, obese.
   - Store weight/height in both `float` and `double` to revise precision differences.

3. **Time-based Daily Planner (time.h, Loops, Conditions)**

   - Using `time.h`, print current system time.
   - Based on time, suggest:

     - Morning (5–11) → "Time to study C++ 🔥"
     - Afternoon (12–17) → "Go exercise 🏋️"
     - Evening (18–23) → "Relax or revise!"
     - Night (0–4) → "Sleep!! 😴"

4. **Task Manager (Arrays, Strings, Loops, Conditions, Unions)**

   - Store up to `N=10` tasks in an array of strings.
   - Each task can have: `title`, `priority (int)`, `status (enum: PENDING, DONE)`.
   - Use a `union` to store either `priority` (int) or `estimated_time` (float).

5. **Pointer Operations**

   - Print tasks using both **array indexing** and **pointer arithmetic**.
   - Swap two tasks using pointers.

6. **Mini Games (Random + Loops + Conditions)**

   - A simple **guess the number game** (`rand()` from `stdlib.h`).
   - User has 5 tries, print win/lose message.

7. **File Save & Load (BONUS, if you want full power)**

   - Save all user data and tasks to a file.
   - On program start, check if a file exists → load previous data.

---

### **What This Tests**

✅ Data types: arrays, strings, chars, int, float, double, long long, boolean
✅ Structs, Unions, Enums
✅ Conditions & Loops
✅ Functions (BMI, task manager, guessing game)
✅ Pointers & pointer arithmetic
✅ Libraries: `math.h`, `time.h`, `string.h`, `stdlib.h`
✅ (Bonus) File handling → full revision of C standard I/O

---
