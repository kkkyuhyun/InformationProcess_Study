public class ThrowExample1 {
  public static void main(String[] args){
    try{
      checkAge(15);
    } catch(IllegalArgumentException e){
      System.out.println(e.getMessage());
    }
  }

public staic void checkAge(int Age){
  if(age<19){
    throw new IllegalArgumentExeption("나이는 19세 이상이어야 합니다.");
  }
  System.out.println("나이가 적합합니다.");
  }
}

//출력값: 나이는 19세 이상이어야 합니다. 
