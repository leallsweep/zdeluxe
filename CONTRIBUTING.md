# Contributing to ZDeluxe (zdl)

First off — thanks for wanting to contribute. ZDeluxe started as a joke calculator and grew into a small, beginner-friendly template project. Whether you're here for the bit or here to learn C++, contributions are welcome. Just follow the rules below so the codebase stays small, readable, and safe.

## Ground Rules

### 1. Indentation: 4 spaces (or a tab set to 4 spaces)

All code in pull requests must use **4 spaces per indentation level**, or a tab character configured to display as 4 spaces. Do not mix tabs and spaces. Check your editor's settings before submitting — inconsistent indentation makes diffs painful to review and is one of the fastest ways to get a PR sent back for changes.

### 2. Keep comments minimal

ZDeluxe favors clear, self-explanatory code over heavily commented code. Do not pepper the codebase with comments explaining what every single line does — if the code needs that much explanation, it should probably be simplified instead. A short comment is fine for something genuinely non-obvious; a comment above every `if` statement is not.

### 3. No telemetry, tracking, or analytics

ZDeluxe does not collect any data, ever. Do not add usage tracking, crash reporting, analytics SDKs, "phone home" behavior, or anything that sends information about the user or their calculations anywhere. This applies regardless of intent — even "anonymous" or "opt-in" telemetry is not accepted. This project stays fully offline and fully private, by design.

### 4. No backdoors — this one is not a joke

This is the one rule in this entire repository that has zero humor attached to it. Do not submit code that creates a backdoor, hidden access point, obfuscated behavior, or any mechanism that could let someone bypass normal program behavior, execute arbitrary code, exfiltrate data, or otherwise compromise the people who build or run this project. Any PR found to contain this kind of code will be rejected immediately and the contributor will be banned from the repository. No exceptions, no "it was just a prank," no debate.

### 5. Keep code optimized and as simple as possible

Favor simple, readable, efficient code over clever or convoluted solutions. If there's a straightforward way to do something and a "smart" way that saves a few lines but is harder to follow, use the straightforward way. Avoid unnecessary allocations, unnecessary abstractions, and unnecessary dependencies. Since ZDeluxe also serves as a learning template, code that's easy to read is just as valuable as code that runs fast — ideally, aim for both.

### 6. Don't modify existing functions unless your change requires it

If your pull request is about adding a new feature or fixing a specific bug, don't refactor, rename, or rewrite unrelated existing functions "while you're in there." Unrelated changes make PRs harder to review, harder to test, and harder to revert if something breaks. Keep your diffs focused on what you're actually trying to accomplish.

## Before You Submit a PR

- Make sure the project still builds cleanly via CMake (see the main [README](./README.md) for build instructions).
- Double-check your indentation (see Rule 1).
- Remove any leftover debug prints, commented-out code, or personal notes.
- Write a clear, short description of what your PR does and why.

## Reporting Issues

Issues are welcome for bugs, build problems, unclear documentation, or reasonable feature suggestions that fit the spirit of the project (see Rule 5 — simple and minimal). A few basics to keep things useful for everyone:

- **Search first.** Check open and closed issues before opening a new one — your bug or idea may already be reported or answered.
- **One issue, one topic.** Don't bundle multiple unrelated bugs or requests into a single issue. Open separate ones so each can be tracked and closed independently.
- **Be specific.** For bugs, include what you did, what you expected to happen, what actually happened, your OS/compiler/CMake version, and steps to reproduce if possible. "It doesn't work" isn't enough to act on.
- **Stay on topic.** Keep discussion in an issue relevant to that issue. Off-topic derails make threads harder to follow and harder to resolve.
- **No duplicate spam.** If you find an existing issue that covers your problem, comment or react on it instead of opening a new one.
- **Be respectful.** Disagreements about code or design are fine; disrespect toward maintainers or other contributors is not.
- **Security issues** (see Rule 4 in Contributing above) should not be filed as public issues — instead, reach out privately so the problem can be assessed before details are made public.

## Questions?

If something in these rules is unclear, open an issue before opening a PR — it's easier to sort out expectations beforehand than to go back and forth on a pull request.

Thanks for contributing to ZDeluxe. Keep it simple, keep it honest, keep it a little ridiculous.
