class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> arr = new ArrayList<>();
        
        for(int i=0;i<n;i++){
            int count = i + 1;
            if(count % 3 == 0 && count % 5 == 0){
                arr.add("FizzBuzz");
            }
            else if(count % 3 == 0){
                arr.add("Fizz");
            } else if(count % 5 == 0){
                arr.add("Buzz");
            } 
            
             else{
                arr.add(String.valueOf(count++));
            }
        }
        return arr;
    }
}