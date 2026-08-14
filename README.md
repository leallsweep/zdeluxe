# zdl

> The calculator the world didn't ask for, but absolutely deserves.

[![Build Status](https://img.shields.io/badge/build-probably%20fine-brightgreen)]()
[![License](https://img.shields.io/badge/license-do%20whatever-blue)]()
[![Ads](https://img.shields.io/badge/ads-none-success)]()
[![Trackers](https://img.shields.io/badge/trackers-none-success)]()
[![Seriousness](https://img.shields.io/badge/seriousness-0%25-red)]()

**zdl** (lowercase, always lowercase — typing `ZDL` will summon nothing, and typing `Zdl` will summon mild disappointment) is short for **ZDeluxe**, a name chosen because it sounds premium while describing software that does exactly four things. zdl is a terminal calculator. It adds. It subtracts. It multiplies. It divides. That's basically it. This entire repository exists as a joke, a bit, a shitpost with a build system attached. Please do not use it to calculate your taxes, your mortgage, or the trajectory of a spacecraft. Use it to add 2 and 2, and if you get 4, congratulations, it works.

---

## Table of Contents

1. [What is zdl?](#what-is-zdl)
2. [A Brief and Unnecessary History of Calculators](#a-brief-and-unnecessary-history-of-calculators)
3. [Features](#features)
4. [Why zdl is the Most Honest Calculator on Earth](#why-zdl-is-the-most-honest-calculator-on-earth)
5. [Building with CMake](#building-with-cmake)
6. [Random Algebra Facts Nobody Asked For](#random-algebra-facts-nobody-asked-for)
7. [Comparison Table: zdl vs. Everything Else](#comparison-table-zdl-vs-everything-else)
8. [FAQ](#faq)
9. [From Joke to Learning Template](#from-joke-to-learning-template)
10. [Philosophy of zdl](#philosophy-of-zdl)
11. [License](#license)

---

## What is zdl?

`zdl` stands for absolutely nothing in particular. It is not an acronym for "Zero Dependency calcuLator," it is not short for "Zealous Digit Lord," and it is definitely not named after anyone's initials. It is just four letters that felt right at 2 AM.

At its core, zdl is a command-line calculator that performs the four basic arithmetic operations: addition, subtraction, multiplication, and division. That's it. That's the whole product. There is no scientific mode. There is no graphing mode. There is no crypto wallet integration, no AI assistant popping up asking "would you like help with that division?", and no subscription tier that unlocks "premium subtraction."

This project is, first and foremost, **a joke**. A repository built partly to laugh at the absurd feature-bloat of modern calculator apps that somehow need 200MB of storage, background permissions, and a "Pro" version to multiply two numbers.

## A Brief and Unnecessary History of Calculators

Nobody asked for this section, but here it is anyway.

- The **abacus**, one of the earliest calculating tools, has been used for thousands of years and is still faster than some banking apps loading a balance screen.
- The **Pascaline**, built by Blaise Pascal in 1642, could add and subtract. It could not, however, run a background telemetry service, which already puts it ahead of several modern apps.
- The **Curta calculator**, a mechanical marvel from the 1940s, was small enough to fit in a coat pocket and was nicknamed the "pepper grinder" because of its shape. It did not require Wi-Fi.
- The first **electronic pocket calculator**, the Sharp QT-8D, arrived in 1969 and was roughly the size of a hardcover book. It also, notably, did not serve ads.
- The **HP-35**, released in 1972, was the first handheld scientific calculator and made slide rules obsolete almost overnight. Engineers reportedly wept, some from joy, some from having just bought a slide rule.
- Texas Instruments calculators have been mandatory in classrooms since roughly the dawn of time, and the TI-84 remains, inexplicably, exactly as expensive as it was 15 years ago.
- Some calculators today come bundled with app stores, cloud sync, and social features. zdl comes bundled with none of that, on purpose, out of spite.

## Features

zdl proudly supports the following operations:

| Operation | Symbol | Supported | Notes |
|-----------|--------|-----------|-------|
| Addition | `+` | ✅ | Groundbreaking |
| Subtraction | `-` | ✅ | Also groundbreaking |
| Raise to power | `^` | ✅ | Mega groundbreaking |
| Multiplication | `*` | ✅ | Still groundbreaking |
| Division | `/` | ✅ | Division by zero not included, sorry, physics said no |
| Existential dread | N/A | ✅ | Free with every use |
| Ads | N/A | ❌ | Never |
| Telemetry | N/A | ❌ | Never |
| Subscription | N/A | ❌ | Never, not even "freemium" |
| Cloud sync | N/A | ❌ | Your `2 + 2` stays on your machine, as God intended |

## Why zdl is the Most Honest Calculator on Earth

This section is important, so we are giving it its own heading, bolding, and possibly interpretive dance if the format allowed it.

zdl is, without exaggeration, without hyperbole, and without a marketing department writing this for us, **the most honest calculator ever compiled**. Here is why, point by excessive point:

- **No ads.** Not a banner ad, not a pop-up, not a "watch this video to unlock the subtract button." zdl has never displayed an advertisement and, frankly, would not know how if it tried.
- **No tracking.** zdl does not know who you are. It does not know what you calculated. It does not send your `7 * 6` to a server farm somewhere to be aggregated into a marketing profile about "people who multiply single digits." Your math stays yours.
- **Completely free.** Not "free with limited operations," not "free trial for 7 days," not "free but division costs $0.99." Free, forever, no strings, no dark patterns, no "upgrade to Pro" nag screen after your fifth calculation.
- **The most accurate calculations known to mankind.** zdl uses standard floating-point arithmetic, the same trusted math that has been adding and subtracting numbers reliably since computers learned to count. Every `+`, every `-`, every `*`, every `/` is computed with the full, undivided attention of your CPU, which, frankly, deserves more credit than it gets.
- **The lightest calculator in existence.** zdl compiles to a binary so small it practically weighs nothing. There is no bloat, no bundled browser engine, no hidden Electron shell secretly running Chromium just to display the number 4.
- **Minimalist by design.** No GUI. No icons. No onboarding tutorial explaining what a "plus sign" is. Just a terminal, a prompt, and numbers doing what numbers do.
- **Runs entirely in the terminal.** No windows, no popups, no "click here to continue," no cookie consent banner (there are no cookies, there was never going to be cookies). Just you, a blinking cursor, and arithmetic.

In short: zdl does not want your data, your money, or your attention span. It wants to add two numbers and get out of your way.

## Building with CMake

zdl uses CMake because CMake is the industry standard for pretending a four-function calculator needs an industry-standard build system.

### Prerequisites

- A C++ compiler (GCC, Clang, or MSVC — zdl does not discriminate)
- CMake 3.10 or later
- A sense of humor (mandatory, not optional)

### Build Steps

```bash
# Clone the repository
git clone https://github.com/yourname/zdl.git
cd zdl

# Create a build directory (a CMake tradition older than some calculators)
mkdir build && cd build

# Configure the project
cmake ..

# Build it
cmake --build .

# Run it
./zdl
```

On Windows, replace your tears with:

```powershell
mkdir build
cd build
cmake ..
cmake --build . --config Release
zdl.exe
```

Also, you can just run some of build scripts, more info you can find in scripts/buildScripts/TUTOR.md

### Build Options

| Option | Default | Description |
|--------|---------|-------------|
| `CMAKE_BUILD_TYPE` | `Release` | Choose `Debug` if you enjoy suffering |
| `BUILD_TESTS` | `OFF` | Enable if you trust nothing, not even addition |

## Random Algebra Facts Nobody Asked For

- The word "algebra" comes from the Arabic *al-jabr*, from a 9th-century book by mathematician Al-Khwarizmi, whose name also gave us the word "algorithm." He never once had to deal with a calculator app asking him to enable notifications.
- Zero was not always considered a number. Ancient Greek mathematicians were famously suspicious of it, which, honestly, is a very relatable stance toward numbers in general.
- The equals sign `=` was invented in 1557 by Robert Recorde, who reportedly chose two parallel lines because "no two things can be more equal." Genuinely wholesome mathematical trivia.
- Negative numbers were considered "absurd" by some mathematicians well into the 17th century, despite the fact that everyone's bank account has understood negative numbers intuitively since the invention of banking.
- The distributive property, associative property, and commutative property sound like law firm names but are actually just rules about how you're allowed to shuffle numbers around without breaking math.
- Pi (π) has been calculated to over 100 trillion digits. zdl has calculated exactly zero digits of pi, because zdl does not do pi. zdl does `+`, `-`, `*`, and `/`. That's the whole deal.
- A "googol" is 10^100, a number so large it exceeds the number of atoms in the observable universe. zdl can technically multiply toward a googol, though your terminal, your patience, and your floating-point precision will all object first.

## Comparison Table: zdl vs. Everything Else

| Feature | zdl | Big Calculator App™ | Phone's Built-in Calculator |
|---|---|---|---|
| Ads | None | Yes, between button taps | Sometimes, somehow |
| Tracking | None | Extensive | Depends on your OS's mood |
| Price | Free | "Free" (with $4.99/mo Pro tier) | Free (bundled, no choice) |
| Install size | Tiny | 150+ MB | N/A, it was already there |
| Runs in terminal | Yes | No | No |
| Requires account | No | Sometimes | No |
| Requires internet | No | Often, for "cloud features" | No |
| Existential clarity | High | Low | Medium |
| Sense of humor | 100% | 0% | Unknown, possibly classified |

## FAQ

**Q: Does zdl support scientific notation, trigonometry, or calculus?**
A: No. zdl supports `+`, `-`, `*`, `/`. If you need calculus, may we suggest a different life choice, or at least a different repository.

**Q: Is this a real, production-grade calculator?**
A: Absolutely not. Please read the top of this README again. This is a joke repository. A bit. A gag with a `CMakeLists.txt`.

**Q: Why does it need CMake for four operations?**
A: Tradition. Also, comedy.

**Q: Can I contribute?**
A: Sure, if your contribution is funny, minimal, and doesn't add ads, tracking, or a mandatory sign-in screen.

**Q: Is zdl really the most accurate calculator on Earth?**
A: It is exactly as accurate as standard floating-point arithmetic allows, which is to say: pretty good, not infinite, and occasionally a little funny about `0.1 + 0.2`. Just like every other calculator that has ever existed. But we said it with more confidence, and confidence counts for a lot in marketing.

## From Joke to Learning Template

Everything above this section should be read in the spirit it was written: as a joke. zdl started as a bit, and it remains a bit. But this section is not a bit.

ZDeluxe was originally built purely for fun, with no serious ambition behind it. Over time, the author (referred to here, semi-officially, as **leallsweep**) decided to give the project a second, more grounded purpose: turning ZDeluxe into a **growing template project for beginners** who are still getting comfortable with basic algebra and with C++ itself.

The reasoning is simple. A calculator is one of the most approachable projects a newcomer can build: the math involved (addition, subtraction, multiplication, division) is simple enough not to get in the way, while the code involved (parsing input, structuring functions, organizing a small C++ project, wiring up a CMake build) still touches on real, transferable skills. ZDeluxe is meant to stay small and readable on purpose, so that someone early in their C++ journey can open the source, understand what's happening line by line, and extend it themselves without getting lost.

Going forward, ZDeluxe is intended to evolve gradually as a teaching-oriented template rather than a feature-complete product:

- The codebase will stay intentionally minimal and heavily commented where it matters, favoring clarity over cleverness.
- New operations or small features may be added over time specifically because they make good exercises, not because the calculator "needs" them.
- Contributions from beginners are welcome, and the project is meant to be a low-stakes place to practice reading, modifying, and extending real (if small) C++ and CMake code.
- The humor and the "this is a joke" framing elsewhere in this README are not being walked back — they stay, because there's no reason a learning project can't also be a little ridiculous.

In short: ZDeluxe began as a punchline, and the punchline stays. But alongside it, the project now has a genuine, secondary goal of being an easy first step for people learning algebra fundamentals and C++ fundamentals side by side.

## Philosophy of zdl

In a world of calculator apps that want your email address before they'll let you divide 9 by 3, zdl asks for nothing. It wants no permissions. It wants no reviews. It wants no five-star rating on an app store. It wants to sit quietly in your terminal, take two numbers, apply one operator, and hand you back an answer, the same way calculators have done since Pascal first turned some gears in 1642.

zdl is not trying to disrupt the calculator industry. zdl is not trying to be a "unicorn startup." zdl does not have a roadmap, a Discord server, or a Series A. zdl is four arithmetic operations and a joke, compiled with CMake, distributed for free, and offered to you with the sincere hope that you smile, run `2 + 2`, get `4`, and move on with your day slightly amused.

## License

zdl is released under [The Unlicense](https://unlicense.org) — public domain, no strings attached. No copyright notice to keep around, no attribution required, no conditions of any kind. Fork it, rename it, ship it, print it out and frame it. Just please, we beg you, do not add ads.

See [LICENSE](./LICENSE) for the full (short) legal text.

---

*zdl: the world's most honest, most accurate, most lightweight, most minimalist, most terminal-based, most joke calculator. Batteries not included. Seriousness not included either.*
