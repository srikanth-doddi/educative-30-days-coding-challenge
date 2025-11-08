🍌 Koko Eating Bananas: A Masterclass in Binary Search Optimization

Just solved this classic problem with competitive programming optimizations that took runtime from 1000ms+ to near-optimal!

The Challenge:
Find minimum eating speed to finish all banana piles within time limit.

Key Optimizations Applied:
✓ Binary search on answer space (not the array!)
✓ Ceiling division trick: (pile + k - 1) / k
✓ Bit shift division: >> 1 instead of / 2
✓ Early termination with goto for speed
✓ Edge case handling: h == piles.size()

The Results:
⏱️ Time: O(n log m) where m = max pile
💾 Memory: O(1) constant space
🚀 20% memory reduction with micro-optimizations

Lesson Learned:
Sometimes the "search space" isn't what you're given—it's what you're looking for. Binary search on answers is a powerful pattern for optimization problems!
