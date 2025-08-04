# 🎮 KBL – Kaun Banega Lakhpati

A **KBC-style quiz game** built in C for the terminal, featuring multiple difficulty levels, lifelines, score tracking, and sound effects — all inspired by the popular game show *Kaun Banega Crorepati*.

---

## 🧠 Game Overview

**KBL** is a terminal-based trivia game where players answer 10 multiple-choice questions spread across 3 levels. The prize money increases with each correct answer. Players can quit at any time or use lifelines to get help. But one wrong answer could cost it all!

---

## 🛠️ Features

- 📚 **10 Questions** divided into 3 levels
- 🧩 **Two lifelines**:
  - `50:50` (available in Level 1)
  - `Audience Poll` (available in Level 2)
- 💰 **Score Tracking** with prize money that doubles each level
- 🔊 **Sound effects** for correct and wrong answers
- ❌ **Quit option** to safeguard your winnings
- 🧾 Optional **player information** form

---

## 🏗️ Project Structure

```
KBL/
├── main.c              # Core game logic
├── questions.c         # Question bank (if modularized later)
├── sounds/             # Audio files for correct answers, clapping, etc.
└── README.md           # Project overview
```

---

## 🎮 How to Play

1. Run the compiled executable.
2. Read the game rules.
3. Answer each multiple-choice question (1–4).
4. Press `0` to quit or `11` to use a lifeline (when available).
5. Win up to ₹10,24,000 by answering all 10 correctly!

---

## 🧾 Compilation

To compile the project on Windows (using GCC):

```bash
gcc main.c -o kbl.exe -lwinmm
```

> `-lwinmm` is used to enable Windows multimedia sound support (`PlaySound`).

To run:

```bash
./kbl.exe
```

---

## 📢 Requirements

- Windows OS (for `conio.h`, `PlaySound`, and `Beep`)
- GCC Compiler
- Terminal or command prompt

---

## 📝 Future Improvements

- File-based high score system
- Struct-based dynamic question bank
- Cross-platform support (Linux/Mac)
- GUI version with SDL or Qt
- More lifelines and time limits

---

## 📸 Screenshots

> 

---

## 👨‍💻 Author

**Tushant Dagur**  
[GitHub](https://github.com/TushantDagur) • [LinkedIn](https://linkedin.com/in/tushantdagur)  

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
