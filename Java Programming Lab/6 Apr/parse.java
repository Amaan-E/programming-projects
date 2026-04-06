
// https://stackoverflow.com/questions/3318037/how-to-pick-up-a-single-character-from-a-string-using-java
class Parse
{
    public static int atoi(String s)
    {
        s = s.strip();
        char star[] = s.toCharArray();
        int x = 0;
        
        int length = star.length;
        
        for (int i = 0; i < length; i++) {
            int currentChar = (int)(star[i]) - '0'; // 0 is 48
            // for (int j = i + 1; j < length; j++) {
                // currentChar *= 10;
            // }
            // x += currentChar;
            x = x * 10 + currentChar;
        }
        
        return x;
        // return Integer.parseInt(s);
    }
}

class Main
{
    public static void main(String[] args)
    {
        int x = Parse.atoi(args[0]);
        // assert (x != Integer.parseInt(args[0]));
        System.out.println(x);
    }
}