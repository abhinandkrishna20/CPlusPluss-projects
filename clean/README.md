

```markdown
# SystemFlush 🧹

A high-performance C++ automation utility designed to quickly purge temporary system files and reset developer caches on Windows environments.

---

## 🔥 Key Features

* **User Temp Cleanup:** Quietly and forcefully removes files within the user's localized `%TEMP%` directory.
* **System Temp Purge:** Targets the core Windows temporary folder (`C:\Windows\Temp`) to reclaim system storage.
* **Developer Environment Flush:** Clears the Node Package Manager (`npm`) local cache to resolve dependency corruption or package installation mismatches.

---

## ⚠️ Requirements & Permissions

Because this application modifies folders within the `C:\Windows` directory, **it must be run with Administrative privileges**. 

* **Failure to do so will result in `Access Denied` errors** when trying to purge system-level temporary files.

---

## 🛠️ How to Build and Run

### 1. Compilation
Open your terminal (Command Prompt or PowerShell) inside this directory and run the following GCC command:

```cmd
g++ main.cpp -o SystemFlush

```

### 2. Execution

#### Via Command Prompt (Recommended):

1. Search for **cmd** in the Windows Start menu.
2. Right-click **Command Prompt** and select **Run as administrator**.
3. Navigate to this folder and execute the application:
```cmd
SystemFlush

```



#### Via IDEs (like VS Code):

* You must close VS Code completely, then right-click the **VS Code shortcut** and select **Run as administrator** before running the code via your play button.

---

## ⚙️ How it Works (Under the Hood)

The application leverages native Windows commands wrapped inside C++ system hooks:

* `del /q /f /s`: Recursively deletes files (`/s`), forces the deletion of read-only files (`/f`), and operates in quiet mode (`/q`) to skip confirmation prompts.
* `npm cache clean --force`: Directly triggers the Node package engine to break down and clear its local verification cache.

```

```