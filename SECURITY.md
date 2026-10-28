# Security Policy

## 🛡️ Overview

This repository contains educational software, lab assignments, and a laboratory project for the **CSE 2100: Object-Oriented Programming Laboratory** course at **Khulna University of Engineering & Technology (KUET)**. While this code is developed primarily for academic demonstration and laboratory assessment, we treat code safety, robustness, and responsible disclosure seriously.

---

## 📦 Supported Versions

Only the latest state of the default branch is actively maintained and reviewed for security considerations.

| Version / Branch | Supported | Notes |
| :--- | :---: | :--- |
| `main` | :white_check_mark: | Active development & reference branch |
| Tagged Releases / Older Commits | :x: | Educational archive |

---

## 🚨 Reporting a Vulnerability

If you discover a security vulnerability, memory corruption flaw, or severe denial-of-service vector in any code within this repository, please report it responsibly:

1. **Do not disclose publicly**: Avoid opening public GitHub issues for critical zero-day security vulnerabilities.
2. **Contact the Maintainer**:
   - Open a private security advisory on GitHub via **Security > Advisories > Report a vulnerability**.
   - Or contact the repository maintainer directly via GitHub profile: [@KankonNil007](https://github.com/KankonNil007).
3. **Include Details**:
   - Step-by-step reproduction instructions.
   - Affected file(s) and function(s).
   - Sample input causing invalid state, crash, or buffer exploitation.
   - Any proposed patch or fix.

### Response Timeline
- **Initial acknowledgment**: Within 48 hours.
- **Triage and confirmation**: Within 5 business days.
- **Patch release**: As soon as a verified remediation is ready.

---

## 🔒 Security & Robustness Guidelines for C++

For students and contributors building upon this repository, please observe the following secure coding practices in C++:

### 1. Robust Input Stream Handling
The standard console extraction operator (`cin >> variable`) enters a fail state if non-numeric characters are supplied when numeric input is expected. Always check stream integrity and clear error flags:

```cpp
if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Please enter a valid number.\n";
}
```

### 2. Memory Safety & Resource Management (RAII)
- When using raw pointers (`new` / `delete`), always ensure ownership semantics are clear, destructors are virtual on base classes (`virtual ~Appliance()`), and resources are released on all execution branches.
- For modern C++ implementations, prefer standard smart pointers (`std::unique_ptr`, `std::shared_ptr`) to avoid manual memory leaks and double-free vulnerabilities.

### 3. Boundary & Range Validation
- Constrain numeric inputs to physically valid bounds (e.g., operating hours $0 \le H \le 24$, power $P > 0$, quantity $Q \ge 1$, positive non-overflowing values).
- Guard array indices and collection offsets against out-of-bounds indexing.

### 4. Compiler Warnings & Static Analysis
Always compile with compiler warnings enabled to detect undefined behavior early:
```bash
g++ -Wall -Wextra -Wpedantic -std=c++17 main.cpp
```

