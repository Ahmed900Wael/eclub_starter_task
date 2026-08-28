# Orientation Task Guide (Milestone #0)

## Task Overview & Objectives

Welcome to your first technical milestone! The primary objective of this diagnostic checkpoint is to verify that:

1. Your local development environment is properly configured.
2. You understand basic Git branching, committing, and Pull Request (PR) submission workflows.
3. You can read problem requirements and fix basic computational, logical, or syntax bugs.

Completing this checkpoint ensures that your environment is 100% ready for upcoming live workshop labs.

## Step-by-Step Execution Workflow

### Step 1: Clone the Repository

Open your terminal (or Command Prompt) and run:

```bash
git clone https://github.com/Ahmed900Wael/eclub_starter_task.git
cd eclub_starter_task
```

### Step 2: Create a Dedicated Feature Branch

Never work directly on the `main` branch. Create and switch to a new branch named after yourself:

```bash
git checkout -b feature/your-full-name
```

*Example:* `git checkout -b feature/ahmed-wael`

### Step 3: Open the Project & Locate the Challenge File

Open the repository in VS Code:

```bash
code .
```

Navigate to the `src/` directory and open the C++ starter code file:

* **C++ Basics Checkpoint File:** `src/task.cpp`

### Step 4: Fix the Logic Challenge

Read the instructions inside the code file comments. Identify the missing logic or intentional bug, write your C++ fix, and save the file (`Ctrl+S` / `Cmd+S`).

### Step 5: Verify Your Solution Locally

- Compile and run the C++ file in your terminal to execute the built-in test assertions
- Ensure all output checks print **`PASS`**.

### Step 6: Commit and Push Your Code

Stage your changes, write a descriptive commit message, and push your branch to GitHub:

```bash
git add .
git commit -m "Fix C++ challenge logic and pass verification tests"
git push origin feature/your-full-name

```

### Step 7: Open a Pull Request (PR)

1. Go to the repository page on GitHub.
2. Click the **"Compare & pull request"** button that appears.
3. Set the PR title to: `Diagnostic Checkpoint - [Your Full Name]`.
4. Click **"Create pull request"**.

---

## C++ Diagnostic Challenge Code Reference (`src/task.cpp`)

```cpp
/**
 * Diagnostic Checkpoint: Calculate Final Cart Price with Discount (C++)
 * 
 * TASK: Fix the function below so that:
 * 1. It grants a 15% discount when promoCode matches "ECLUB2026".
 * 2. It returns the correct final price rounded/calculated to 2 decimal places.
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateTotal(double price, const string promoCode) {
    double discount = 0.0;

    // TODO: Grant a 15% discount (0.15) when promoCode matches "ECLUB2026"
}

int main() {
    // TODO: Verify that test1 returns true when no discount is applied, test2 returns false when 15% discount is applied
    bool test1 = true;
    bool test2 = true;

    cout << "Test 1 (No Promo): " << (test1 ? "PASS" : "FAIL") << endl;
    cout << "Test 2 (Valid Promo): " << (test2 ? "PASS" : "FAIL") << endl;

    if (test1 && test2) {
        cout << "\nAll verification tests PASSED!" << endl;
    } else {
        cout << "\nSome tests FAILED. Please check your logic." << endl;
    }

    return 0;
}
```