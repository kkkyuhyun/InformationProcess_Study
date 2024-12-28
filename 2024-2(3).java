public class String rf(String str, int index, boolean[] seen){
  if(index<0) return "";
  char c= str.charAt(index);
  String result = rf(str, index-1, seen);
  if(!seen[c]){
    seen[c] = true;
    return c + result;
  }
  return result;
}

public static void main(String[] args){
  String str ="abacabcd";
  int length = str.length(); 
  boolean[] seen = new boolean[256]; //length = 8
  System.out.print(rf(str, length-1, seen));
  } //중복을 제거하여 불린 d c b a 문자열 역순 출력 
}
 /*소문자 a의 아스키코드 문자는 97이다. b는 98, c는 99, d는 100이다. */
/* 함수 rf호출       char c        result      seen[c]       !seen[c]     반환값
  rf(str,7,seen)     d              cba       seen[100]=      true        dcba
  rf(str,6,seen)     c              cba       seen[100]=      false       cba
  rf(str,5,seen)     b              cba       seen[100]=      false       cba
  rf(str,4,seen)     a              cba       seen[100]=      false       cba
  rf(str,3,seen)     c              cba       seen[99]=       true        cba
  rf(str,2,seen)     a               ba       seen[97]=      false         ba
  rf(str,1,seen)     b               a        seen[98]=       true         ba
  rf(str,0,seen)     a                        seen[97]=       true          a
  rf(str,-1,seen)    */
