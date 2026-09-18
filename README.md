# CS121-Procedural-Horse-Race-Project-
## Algorithm

```
main() 
    - array for 5 horses and each horse start from 0 
    - keepGoing = true 
    - srand(time(NULL)) random number generator 
    
    - while KeepGoing true 
            go through each 5 horses 
                advaance current horse 
                printLane
                check if current horse win 
                    if it won 
                        keepGoing = false 
            if KeepGoing true 
                user press enter for another turn 
                press enter to continue 
 
advance () 
    -  horse number and the horses array 
    -  coin a random value 0 or 1 
    -  if coin is 1 
        move that horse forward one position  

printLane() 
    - get horse number and the array
    - go through 15 position 
        if current position match the horse position 
            print horse number 
        if not 
            print (.)
 
isWinner() 
    - won to false 
    - get the horse number and the horse array     
    - if the horse postion reach 15 
            won to true
            print which horse won 
    return won 
```





