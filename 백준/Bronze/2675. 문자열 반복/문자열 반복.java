import java.util.*;

public class Main {
 
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();
        int[] repeat = new int[testcase];
        String word[] = new String[testcase];
        
        for(int i = 0; i < testcase; i++)
        {
            repeat[i] = sc.nextInt();
            word[i] = sc.next();
        }

        for(int i = 0; i < testcase; i++)
        {
            for(int j = 0; j < word[i].length(); j++)
            {
                for(int k = 0; k < repeat[i]; k ++)
                {
                    System.out.printf("%c", word[i].charAt(j));
                }
            }
            System.out.println();
        }
    }
}    

