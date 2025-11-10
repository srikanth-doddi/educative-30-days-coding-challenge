Day 10 of #30DaysOfCode – Group Anagrams (Educative)

Quick win today. The challenge was to group words that are anagrams. A brute approach sorts every string, which works, though it wastes time and memory. I pushed for a faster path using a 26-count signature for each word. Every string becomes a tiny fixed-size key that represents how many times each letter appears. Equal signatures mean the words are anagrams.

This avoids repeated sorting and gives near linear performance across the list. Clean, predictable, fast. It is a good reminder that the right data representation often matters more than clever tricks.

On to Day 11.

#30DaysOfCode #Educative #Coding #DSA #Cplusplus