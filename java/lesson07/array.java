class Array {
  public static void main(String args[]) {
    
    
    // Массив — это группа однотипных переменных, 
    // для обращения к которым ис­пользуется общее имя

    int month_days[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    System.out.println("В апреле " + month_days[3] + " дней.");

    // Многомерные массивы

    int twoD[][] = new int [4][];

    twoD[0]= new int[1];
    twoD[1] = new int[2];
    twoD[2] = new int[3];
    twoD[3] = new int[4];
    int i, j, k = 0;

    for(i=0; i<4; i++) {
        
        for(j = 0; j < i +1; j++) {
            twoD[i][j] = k;
            k++;
        }

    }
    
    for(i=0; i<4; i++) {
        
        for(j = 0; j < i +1; j++) {
            
            System.out.print(twoD[i][j ] + " ");
            System.out.println();

        }

    }

  }
}