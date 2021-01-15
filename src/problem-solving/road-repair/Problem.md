# Road Repair

A number of points along the highway are in need of repair.
An equal number of crews are available, stationed at various points along the highway.
They must move along the highway to reach an assgned point.
Given that one crew must be assigned to each job, 
what is the minumum total amount of distance traveled by all crews before they can begin work?

For example, given crews at points { 1 , 3 , 5} and required repairs at { 3 , 5 , 7 }, 
one posible minimum assignment would be { 1->3 , 3->5 , 5->7 } for a total of 6 units traveled.

### Function Description

Complete the function getMinCost in the editor below.
The function should return the minimum possible total distance traveled as an integer.

getMinCost has the following parameters:  
*crewid[crewid[0], ...crewid[n-1]]*: a vector of integers  
*jobid[jobid[0], jobid[n-1]]*: a vector of integers  

### Sample Case 0

Sample Input For Custom Testing

```
5
5
3
1
4
6
5
9
8
3
15
1
```

Sample Output

```
17
```

### Sample Case 1

Sample Input For Custom Testing

```
4
5
1
4
2
4
4
7
9
10
```

Sample Output

```
18
```
