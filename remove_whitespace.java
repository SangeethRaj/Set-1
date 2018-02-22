public class RemoveAllSpace { 
    public static void main(String[] args) {  
        String str = "Sangeeth the Front Stack Developer";  
        String noSpaceStr = str.replaceAll("\\s", "");
        System.out.println(noSpaceStr);  
    }
}
