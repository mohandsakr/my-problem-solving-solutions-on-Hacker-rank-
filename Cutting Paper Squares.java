/*
problem link: https://www.hackerrank.com/challenges/p1-paper-cutting/problem
problem name: Arrays - DS
status:accpted ;
author : mohand sakr; 
*/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {
  
    public static BigInteger solve(int n, int m) {
     BigInteger f =  BigInteger.valueOf(n);
      BigInteger f2 =   BigInteger.valueOf(m);
      return f.multiply(f2).subtract((BigInteger.valueOf(1)));
       
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int n = Integer.parseInt(firstMultipleInput[0]);

        int m = Integer.parseInt(firstMultipleInput[1]);

 
        bufferedWriter.write(String.valueOf(Result.solve(n, m)));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
