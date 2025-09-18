# 🎮 KBL – Kaun Banega Lakhpati  

A **KBC-style quiz game** built in C for the terminal, featuring multiple difficulty levels, lifelines, score tracking, sound effects, and now **MySQL integration** to store player information and results — all inspired by the popular game show *Kaun Banega Crorepati*.  

---

## 🧠 Game Overview  

**KBL** is a terminal-based trivia game where players answer 10 multiple-choice questions spread across 3 levels. The prize money increases with each correct answer. Players can quit at any time or use lifelines to get help. But one wrong answer could cost it all!  

With the new update, player details and game results can be saved in a **MySQL database** for better tracking.  

---

## 🛠️ Features  

- 📚 **10 Questions** divided into 3 levels  
- 🧩 **Two lifelines**:  
  - `50:50` (available in Level 1)  
  - `Audience Poll` (available in Level 2)  
- 💰 **Score Tracking** with prize money that doubles each level  
- 🔊 **Sound effects** for correct and wrong answers  
- ❌ **Quit option** to safeguard your winnings  
- 🧾 **Player information form** with **MySQL integration** to store:  
  - Player name  
  - Score  
  - Winnings  
  - Timestamp of the game session  

---

## 🏗️ Project Structure  


```
KBL/
├── main.c # Core game logic (KBL)
├── db.c # MySQL connection & queries
├── Makefile # Build automation
├── sounds/ # Audio files for correct answers, clapping, etc.
└── README.md # Project overview
```

---

## 🎮 How to Play  

1. Run the compiled executable.  
2. Enter your player details.  
3. Read the game rules.  
4. Answer each multiple-choice question (1–4).  
5. Press `0` to quit or `11` to use a lifeline (when available).  
6. Your results will be stored in the **MySQL database**.  
7. Win up to ₹10,24,000 by answering all 10 correctly!  

---

## 🧾 Compilation  

To compile the project on **Windows (using GCC + MySQL client library)**:  

```bash
gcc main.c db.c -o kbl.exe -lwinmm -lmysql
```

> `-lwinmm` is used to enable Windows multimedia sound support (`PlaySound`).

> `-lmysql` links the MySQL client library.

To run:

```bash
./kbl.exe
```

---

## 🗄️ Database Setup
1. Start your MySQL server.
2. Create a database and table for results:
   
```
CREATE DATABASE kbl_db;

USE kbl_db;

    CREATE TABLE players (

        id INT AUTO_INCREMENT PRIMARY KEY,
    
        name VARCHAR(50),
    
        score INT,
    
        winnings INT,
    
        played_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
    
    );
```

3. Update connection details in db.c:

```
  const char *host = "localhost";

  const char *user = "root";

  const char *pass = "yourpassword";

  const char *dbname = "kbl_db";
```

---

## 📢 Requirements

- Windows OS (for conio.h, PlaySound, and Beep)
- GCC Compiler
- MySQL Server & MySQL C API libraries installed
- Terminal or command prompt

---

## 📝 Future Improvements

- File-based + database high score system
- Struct-based dynamic question bank
- ross-platform support (Linux/Mac)
- GUI version with SDL or Qt
- More lifelines and time limits

---

## 📸 Screenshots/Demo

> 

---

## 👨‍💻 Author

**Tushant Dagur**  
[GitHub](https://github.com/TushantDagur) • [LinkedIn](https://linkedin.com/in/tushantdagur)  

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
