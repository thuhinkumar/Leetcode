class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        q = deque()
        #max heap
        tasks = Counter(tasks)
        tasks = [-task for task in tasks.values()]
        heapq.heapify(tasks)
        time = 0

        #elems of will be of [time, task]
        while len(tasks)>0 or len(q)>0:
            time+=1
            #check queue and remove all tasks that are now e,eligible to be run again and add to heap
            #take an elem from the heap and process it
            if len(tasks)>0:
                task = heapq.heappop(tasks)
                task +=1
                if task < 0:
                    q.append([time+n,task])
                    
            while len(q)>0 and q[0][0] == time:
                _, task = q.popleft()
                heapq.heappush(tasks,task)
        return time