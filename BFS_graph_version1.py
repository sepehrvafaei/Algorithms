adjList={"s":["a","x"],"a":["z","s"],"x":["d","c","s"],"z":["a"],"d":["x","c","f"],
         "c":["x","d","f","v"],"f":["d","c","v"],"v":["f","c"]}
def shortestPath_BFS(s,end,adj):
    level={s:None}
    parent={s:None}
    i=1
    frontier=[s]
    while frontier:
        next=[]
        for u in frontier:
            for v in adj[u]:
                if v not in level:
                    level[v]=i
                    parent[v]=u
                    next.append(v)
        frontier=next
        i+=1
    path=[]
    temp=end
    while temp in adj.keys():
        path.append(temp)
        temp=parent[temp]
    path.reverse()
    print(*path,sep="->")
    print("shortest distance:",level[end])
    
shortestPath_BFS("s","v",adjList)
    


    
