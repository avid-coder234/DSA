BRUTE FORCE

sum = 0;

for(i = 0 to n - 1){
    min = arr[i];
    for(j = i to n - 1){
        mini = min(arr[i],mini);
        sum = sum + mini;
    }
}
return sum;