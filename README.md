# FindPlayersWithZero-or-OneLosses-LeetCode

## Problem Statement

You are given a list of matches, where each match is represented as a pair [winner, loser]. The task is to find players who have not lost any matches and players who have lost exactly one match.

## Solution Explanation

The `findWinners` function takes a list of matches as input and returns two lists: one containing players who have not lost any matches and another containing players who have lost exactly one match.

### Steps:
1. **Count Losses:** Iterate through the matches and count the number of matches each player has lost using an unordered map.
2. **Populate Lists:** While iterating, populate the `not_lost` vector with the winners of matches and identify players who have lost exactly one match, storing them in the `lost_once` vector.
3. **Remove Duplicates and Sort:** Remove duplicates from both vectors and sort them in ascending order.
4. **Remove Players with Losses:** Remove players from the `not_lost` vector who have lost matches, based on the count obtained in step 1.
5. **Return Result:** Return the modified `not_lost` and `lost_once` vectors as the result.

This solution ensures the uniqueness and correct order of players in both lists, meeting the requirements of the problem statement.



## How to Use

👍 Like the repo and follow  
🔍 Search "Find Winners Problem" on your browser for more details  
✏️ Feel free to add or update something in the solution  

