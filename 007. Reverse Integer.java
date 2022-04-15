class Solution {
    public int reverse(int x) {
        int num = x;
        int reversed = 0;

        int plusMax = Integer.MAX_VALUE - ((Integer.MAX_VALUE / 10) * 10);
        int minusMax = Integer.MIN_VALUE - ((Integer.MIN_VALUE / 10) * 10);

        while (num != 0) {
            int digit = num % 10;
            num /= 10;

            if (reversed > Integer.MAX_VALUE / 10) {
                return 0;
            }
            if (reversed == Integer.MAX_VALUE / 10 && digit > plusMax) {
                return 0;
            }
            if (reversed < Integer.MIN_VALUE / 10) {
                return 0;
            }
            if (reversed == Integer.MIN_VALUE / 10 && digit < minusMax) {
                return 0;
            }

            reversed = reversed * 10 + digit;
        }

        return reversed;
    }
}