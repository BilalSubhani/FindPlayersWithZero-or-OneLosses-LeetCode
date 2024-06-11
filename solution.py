class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        lost_count = {}
        not_lost = []
        lost_once = []
        
        for winner, loser in matches:
            lost_count[loser] = lost_count.get(loser, 0) + 1
            not_lost.append(winner)
        
        for player, count in lost_count.items():
            if count == 1:
                lost_once.append(player)
        
        not_lost = sorted(list(set(not_lost)))
        lost_once = sorted(list(set(lost_once)))
        
        not_lost = [player for player in not_lost if lost_count.get(player, 0) == 0]
        
        return [not_lost, lost_once]
