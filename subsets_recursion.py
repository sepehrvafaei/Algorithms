subsets=[]
def print_subsets(s,s_p=[]):
    if s==[]:
        subsets.append(s_p)
        return
    print_subsets(s[1:],s_p)
    print_subsets(s[1:],s_p+[s[0]])

print_subsets([1,2,3])
print(len(subsets))
print(subsets)
    
