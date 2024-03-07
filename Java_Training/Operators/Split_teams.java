package Java_Training.Operators;

/*During the weekend, Ross Geller has decided to conduct some team games. He wants to split his friends into equal-sized teams. In some cases, some friends may be left out of the teams, and he wanted to use the left-out friends to assist him in conducting the team games. For instance, if there are 50 friends and they have to be divided into 7 equal-sized teams, then there will be 7 in each team and 1 friend will be left out. Ross asks for your help to automate this team-splitting task. Can you please help him out?



Input Format:

Input consists of 2 integers. 

The first integer corresponds to the number of friends Ross has. 

The second integer corresponds to the number of teams.



Output Format:

Refer sample input and output for formatting specifications.



Sample Input 1:

60

8



﻿Sample Output 1:

The number of friends in each team is 7 and left out is 4



Sample Input 2:

78

6



Sample Output 2:

The number of friends in each team is 13 and left out is 0

 */

 import java.util.*;
 public class Split_teams
 {
   public static void main(String args[])
   {
     
     Scanner s = new Scanner(System.in);
     int n = s.nextInt();
     int nt = s.nextInt();
     System.out.print("The number of friends in each team is "+n/nt+" and left out is "+n%nt);
     s.close();
 
 
   }
 }