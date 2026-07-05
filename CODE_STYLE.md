# 🎨 Code Style Guide

> This document records the conventions already followed across this repository, so they stay consistent as it grows and don't rely on memory alone.

---

## 📁 File Structure

Every solution/algorithm file follows this order, top to bottom:

```cpp
#include<iostream>
using namespace std;

/*
Use Case:
Plain-English explanation of what real-world or
algorithmic scenario this file/problem represents.
*/

/*
Approach: Name of the technique used
TC: O(...)
SC: O(...)
*/

class ClassName {
public:
    // implementation
};

// Main Function
int main() {
    ClassName obj;
    // sample input + call
    cout << obj.method(...);
    return 0;
}
```

If a file demonstrates more than one approach to the same problem (e.g. `Euclidean.cpp`), stack multiple `Approach/TC/SC` blocks back to back inside the same comment, one per technique.

---

## 💬 Comment Conventions

- **`Use Case`** — always present, explains *why* this technique/problem matters, not just what it does.
- **`Approach`** — names the technique explicitly (e.g. `Two Pointer`, `Boyer Moore's Algo / Frequency Count`), not just "brute force" or "optimized."
- **`TC` / `SC`** — always both present, always in Big-O notation, with the variable defined inline when it isn't `n` by default:
  ```
  TC: O(m+n), m and n are sizes of nums1 and nums2
  SC: O(d), d = depth of recursion
  ```
- Inline comments inside method bodies are used sparingly, only to clarify a non-obvious line (e.g. `// 0 entry check`), not to narrate every line.

---

## 🏷️ Naming Conventions

| Element | Convention | Example |
| ------- | ---------- | ------- |
| Class name | PascalCase, named after the technique or problem | `BoyerMoore`, `Kadane`, `Solution` |
| Method name | camelCase, describes what it returns/does | `majorityElement`, `maxSubArraySum`, `hammingWeight` |
| Variables | short, lowercase, meaningful in context | `curr`, `maxSum`, `freq` |
| File name | matches the LeetCode problem number, or the algorithm name for reference implementations | `26.cpp`, `Kadanes.cpp` |

---

## 🧱 Formatting Rules

- **Indentation:** 4 spaces, no tabs.
- **Braces:** opening brace on the same line as the declaration.
  ```cpp
  class Kadane {
  public:
      int maxSubArraySum(vector<int>& nums) {
          ...
      }
  };
  ```
- **Spacing:** minimal/compact around operators is acceptable and consistent (`curr+=i;`, `a<b`) — prioritize matching the existing file over introducing extra whitespace.
- **Line endings:** LF (`\n`), not CRLF. Check this if editing on Windows — see `.gitattributes`.

---

## 📦 Includes

- Only include what the file actually uses (`<vector>`, `<climits>`, etc.) — avoid blanket includes like `<bits/stdc++.h>`.
- No duplicate `#include` lines — always check before adding a new one, since it's easy to reintroduce one during copy-paste between files.
- `using namespace std;` is used throughout for brevity, consistent with this being a practice/learning repo rather than production code.

---

## ✅ Solution Requirements Checklist

Before considering a file "done," it should have:

- [ ] A `Use Case` comment
- [ ] An `Approach` comment naming the technique
- [ ] Both `TC` and `SC` documented, with variables defined if not `n`
- [ ] A working `main()` with a sample input demonstrating the solution
- [ ] No duplicate includes
- [ ] Correct spelling in comments (typos in `Approach`/`Use Case` blocks should be treated the same as a code bug)

---

## 🔗 Related

- See `LeetCode/README.md` for per-difficulty documentation status.
- See `Notes/5.Time And Space Complexity.pdf` for a refresher before writing TC/SC comments.