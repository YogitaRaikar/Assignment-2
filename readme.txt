DAA ASSIGNMENT-2
PROBLEM-03


TEAM DETAILS

YOGITA RAIKAR-1KS18CS122
SWETHA BIJANAPALLI-1KS18CS107
R. DEKSHITHA-1KS18CS075


CONTRIBUTION

YOGITA RAIKAR- Coding and submission
SWETHA BIJANAPALLI- Coding and testing
DEKSHITHA- Coding and report making


03- TOWER OF HANOI:
For the given n number of disks, the way to accomplish the task in a minimum no of steps is:
1.Move the top n-1 disks to intermediate tower.
2.Move the bottom disk to destination tower.
3.Finally, move the n-1 disks from the intermediate tower to the destination tower.

Using this concept we have done our assignment of tower of hanoi using 5 towers. We have divided the n number of disks into 3 parts: top, middle and bottom and is done as follows:
If there are 5 towers say A,B,C,D and E then,
1.Move top n/3 disks from A to C using E
2.Move middle n/3 disks from A to D using E
3.Move bottom n/3 disks from A to B using E
4.Move n/3 disks from D to B using E
5.Move n/3 disks from C to B using E


INSTRUCTION TO RUN THE PROGRAM

Give the number of disks in tower A.

DETAILS ON EXAMPLE INVOCATION AND OUTPUT
Entere the number of disks as 6
Output-


Initial status of tower:
Tower A: 1	 2 3 4 5 6	
Tower B:
Tower C:
Tower D:
Tower E:

Sequence of disk

Move disk 1 from a to e

Tower A: 2	3 4 5 6	
Tower B: 
Tower C: 
Tower D: 
Tower E: 1	

Move disk 2 from a to c

Tower A: 3 4 5 6	
Tower B: 
Tower C: 2	
Tower D: 
Tower E: 1	

Move disk 1 from e to c

Tower A: 3	4 5 6	
Tower B: 
Tower C: 1 2	
Tower D: 
Tower E: 


Move disk 3 from a to e

Tower A: 4	5 6	
Tower B: 
Tower C: 1 2	
Tower D: 
Tower E: 3	

Move disk 4 from a to d

Tower A: 5	6	
Tower B: 
Tower C: 1 2	
Tower D: 4	
Tower E: 3	

Move disk 3 from e to d

Tower A: 5	6	
Tower B: 
Tower C: 1 2	
Tower D: 3 4	
Tower E: 


Move disk 5 from a to e

Tower A: 6	
Tower B: 
Tower C: 1 2	
Tower D: 3 4	
Tower E: 5	

Move disk 6 from a to b

Tower A: 
Tower B: 6	
Tower C: 1 2	
Tower D: 3 4	
Tower E: 5	

Move disk 5 from e to b

Tower A: 
Tower B: 5 6	
Tower C: 1 2	
Tower D: 3 4	
Tower E: 


Move disk 3 from d to e

Tower A: 
Tower B: 5 6	
Tower C: 1 2	
Tower D: 4	
Tower E: 3	

Move disk 4 from d to b

Tower A: 
Tower B: 4 5 6	
Tower C: 1 2	
Tower D: 
Tower E: 3	

Move disk 3 from e to b

Tower A: 
Tower B: 3 4 5 6	
Tower C: 1 2	
Tower D: 
Tower E: 


Move disk 1 from c to e

Tower A: 
Tower B: 3 4 5 6	
Tower C: 2	
Tower D: 
Tower E: 1	

Move disk 2 from c to b

Tower A: 
Tower B: 2 3 4 5 6	
Tower C: 
Tower D: 
Tower E: 1	

Move disk 1 from e to b

Tower A: 
Tower B: 1 2 3 4 5 6	
Tower C: 
Tower D: 
Tower E:


CHALLENGES FACED 
We faced a bit of trouble when the number of disks is not divisible by 3. And to display the status to each tower after each move was also very challenging for us.

HOW WE FACED THE CHALLENGES
We tried different ways and then worked together as a team on this assignment. We compiled all our ideas and worked on the coding and then tested with different cases.

WHAT WE LEARNT FROM THIS ASSIGNMENT
We learnt to work together coordinately. We learnt how to trace out through loops,recursion function and correct errors in the code. We also learnt how to make the problem simple using divide and conquer approach.
