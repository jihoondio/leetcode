class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) return new String();
        String first = strs[0];
        StringBuilder lcp = new StringBuilder("");
        for (int i = 0; i < first.length(); i++) {
            char ch1 = first.charAt(i);
            boolean append = true;
            for (int j = 1; j < strs.length; j++) {
                if (strs[j].length() <= i) {
                    append = false;
                    break;
                }

                char ch2 = strs[j].charAt(i);
                if (ch1 != ch2) {
                    append = false;
                    break;
                }
            }
            if (append) {
                lcp.append(ch1);
            } else {
                break;
            }
        }
        return lcp.toString();
    }
}