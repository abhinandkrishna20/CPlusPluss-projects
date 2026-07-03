# PowerTools ⚡

A native C++ command-line management engine that provides administrative control over Windows power states, featuring automation hooks to cleanly terminate operational processes before scheduling power sequences.

---

## 🔥 Key Features

* **1. Shutdown Immediately:** Instantly terminates current active desktop instances and shuts down the kernel with zero delay (`/t 0`).
* **2. Shutdown Timely:** Allows user-defined operational windows (in seconds) to schedule a delayed background shutdown.
* **3. Hibernate:** Freezes volatile system RAM onto the local disk space and powers off the motherboard safely (`shutdown /h`).
* **4. Sleep:** Directly triggers native `powrprof.dll` API hooks to transition the machine into a low-power runtime suspension loop.
* **Process Interception:** Selecting options 1 or 2 initiates a global taskkill loop that forcefully flushes heavy consumer desktop processes (e.g., Chrome, Edge, IDE instances) ahead of power termination blocks.

---

## ⚠️ Requirements & Warnings

* **Administrative Privileges:** This tool communicates directly with core Windows power state binaries and hardware profiles. It **must be ran as Administrator** to complete process terminations and force-shutdown procedures cleanly.
* **Data Persistence Alert:** The rapid process-termination mechanism handles files aggressively. Ensure any un-saved document states across open windows are committed to disk manually before selecting Option 1 or 2.

---

## 🛠️ How to Build and Run

### 1. Compilation
Navigate to this sub-directory in your terminal and compile via your standard environment compiler:

```cmd
g++ main.cpp -o PowerTools