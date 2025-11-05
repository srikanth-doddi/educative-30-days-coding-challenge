***

# Loud and Rich

**Difficulty:** Medium  
**Time Estimate:** 30 minutes

## Problem Description

You are given a group of individuals where each person has:
- A specific amount of money
- A unique quietness level

The relationships between people's wealth are defined by an array `richer`, where each pair `[xi, yi]` indicates that person `xi` has more money than person `yi`.

The quietness level of each person is represented by the array `quiet`, where `quiet[i]` represents how quiet person `i` is (lower values mean quieter).

## Task

Return an integer array `res` where `res[i]` represents the index of the quietest person among all people who have equal or more money than person `i`.

In other words, for each person `i`, find the person `y` who:
1. Has at least as much money as person `i` (or is person `i` themselves)
2. Has the minimum `quiet[y]` value among all such people

## Input Format

- `quiet`: Array of integers representing quietness levels
- `richer`: 2D array where `richer[j] = [xi, yi]` means person `xi` is richer than person `yi`

## Output Format

- `res`: Array of integers where `res[i]` is the index of the quietest person with equal or more wealth than person `i`

## Constraints

- $$n = $$ `quiet.length`
- $$1 \leq n \leq 500$$
- $$0 \leq $$ `quiet[i]` $$ < n$$
- All values in `quiet` are unique
- $$0 \leq $$ `richer.length` $$ \leq n \times (n-1)/2$$
- $$0 \leq xi, yi < n$$
- $$xi \neq yi$$
- All pairs in `richer` are unique
- All wealth relationships are logically consistent (no contradictions)

***