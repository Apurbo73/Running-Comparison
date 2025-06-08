### Running Comparison
Sure! Here's a clear explanation in **two short paragraphs**:

The code processes multiple test cases, where each test case represents the distances Alice and Bob ran over `N` days. For each day, it checks if both runners are happy. According to the rules, Alice is happy if Bob did **not** run more than twice her distance, and Bob is happy if Alice did **not** run more than twice his. This translates to checking whether both `B[i] ≤ 2 * A[i]` and `A[i] ≤ 2 * B[i]` are true for day `i`.

If both conditions are satisfied, it means neither of them ran disproportionately more than the other, so both are happy on that day. The code counts such "happy days" and prints the count for each test case. Let me know if you want a [sample walkthrough](f) or [logic visualization](f) to reinforce the concept.
