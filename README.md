

# C++ Apps 🛠️

A curated collection of lightweight, open-source C++ command-line utilities and automation tools built for Windows. This repository serves as a centralized directory for functional scripts converted into native, high-performance binary applications.

---

## 📂 Repository Structure

Each application is contained within its own dedicated folder, complete with source code and compilation instructions.

```text
C++ Apps/
│
├── clean/
│   ├── main.cpp          # System cleanup and cache flushing utility
│   └── README.md         # App-specific documentation
│
└── README.md             # Main repository guide (This file)

```

---

## 🚀 Included Applications

### 1. SystemFlush

A system maintenance utility that automates local file cleanup and developer environment maintenance.

* **Key Features:**
* Cleans user-profile temporary files (`%TEMP%`).
* Purges system-wide Windows temp files (`C:\Windows\Temp`).
* Force-clears the Node Package Manager (`npm`) cache to resolve package corruption.


* **Requirements:** Must be executed with **Administrator Privileges** to access restricted system directories.

*(More applications will be added here as the directory grows!)*

---

## 🛠️ General Compilation Guide

To build and run any of these applications on a Windows machine, ensure you have a C++ compiler (like GCC via MinGW-w64) installed and configured in your environment variables.

1. **Clone the repository:**
```bash
git clone [https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git](https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git)
cd "C++ Apps"

```


2. **Navigate to the specific app directory:**
```bash
cd SystemFlush

```


3. **Compile the source code:**
```bash
g++ main.cpp -o SystemFlush

```


4. **Run the executable:**
```bash
SystemFlush

```



---

## 📝 License

This project is open-source and available under the [MIT License](https://www.google.com/search?q=LICENSE). Feel free to modify, distribute, and use these utilities as needed.

```

---

### 💡 Tips for Publishing This on GitHub:
* **Replace the Placeholders:** Make sure to update `YOUR_USERNAME` and `YOUR_REPOSITORY_NAME` in the cloning commands with your actual GitHub details.
* **Keep Folders Organized:** When you push this to GitHub, create a main folder called `C++ Apps` on your computer, make a subfolder called `SystemFlush`, put your `main.cpp` code inside that subfolder, and place this `README.md` file in the main folder. This keeps the root directory uncluttered as you add more apps later!

```