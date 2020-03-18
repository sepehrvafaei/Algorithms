def partition(arr,low,high): 		 
	pivot = arr[high]
	i=low
	for j in range(low , high): 
		if arr[j] < pivot: 
			arr[i],arr[j] = arr[j],arr[i]
			i+=1
	arr[i],arr[high] = arr[high],arr[i] 
	return i
    
def quick_sort(arr,low,high): 
	if low < high: 
		pi = partition(arr,low,high)  
		quick_sort(arr, low, pi-1) 
		quick_sort(arr, pi+1, high) 

arr = [1,2,5,4,2,3,1,4,6,5,6,1,5,4,3] 
n = len(arr)
quick_sort(arr,0,n-1) 
print ("Sorted array is:") 
for i in range(n): 
	print(arr[i])
