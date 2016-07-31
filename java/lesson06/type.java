// Демонстрация приведения типов,
class Conversion {
    public static void main(String args[]) {
        
        byte b;
        int i = 257;
        double d = 323.142;
        System.out.println("Преобразование int в byte.");

        b = (byte) i;
        System.out.println("i и b " + i + " " + b) ;
        System.out.println("Преобразование double в int.");

        i = (int) d;
        System.out.println("d и i " + d + " " + i);
        System.out.println("Преобразование double в byte.");

        b = (byte) d;
        System.out.println("d и b " + d + " " + b ) ;
    }
}