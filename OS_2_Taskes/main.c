        /*
         * A simple matrix multiplication program
         * (Matrix_A  X  Matrix_B) => Matrix_C
         */
        #include <stdlib.h>
        #include <stdio.h>
        #include <errno.h>
        #include <pthread.h>
        #include <unistd.h>
        #include <sched.h>
        #define ARRAY_SIZE 3

        typedef int matrix_t[ARRAY_SIZE][ARRAY_SIZE];
        matrix_t MA,MB,MC;

        struct arg{
            int row ;
            int col;
            int size;
            matrix_t MA,MB,MC;

        };



        /*
        * Routine to multiply a row by a column and place element in
        * resulting matrix.
        */


        /*
        * Routine to multiply a row by a column and place element in
        * resulting matrix.
        */





        void *multi (struct arg *data)
        {
            printf("row =%d\n",data->row);
            printf("col = %d\n",data->col);
            printf("MA= %d\n",data->MA[0][0]);
            printf("MA= %d\n",data->MA[1][1]);
            printf("MB =%d\n",data->MB[0][0]);
            printf("MB =%d\n",data->MB[1][1]);
            mult (data->size,data->row,data->col,data->MA,data->MB,data->MC);
            data->col++;
            pthread_exit(0);
        }




        void mult(int size,int row,int column,matrix_t MA,matrix_t MB,matrix_t MC)
        {
          int position;
          MC[row][column] = 0;
          for(position = 0; position < size; position++) {
            MC[row][column] = MC[row][column] +
              ( MA[row][position]  *  MB[position][column] ) ;
              printf("%d->%d\t",position,MC[row][column]);
          }
        }



        /*
         * Main: allocates matrix, assigns values, computes the results
         */
        int main(void)
        {
          int size, row, column;
          /* Currently size hardwired to ARRAY_SIZE size */
          size = ARRAY_SIZE;

          /* Fill in matrix values, currently values are hardwired */
          //write your code here
         struct arg data;
          data.size = size;
          for(row = 0; row < size ; row ++)
          {
              for (column = 0 ; column < size ; column ++)
              {
                 data.MA[row][column] = 1;
                 data.MB[row][column] = 2;
                 data.MC[row][column] = 0;
              }
          }
          printf("MATRIX: The A array is;\n");
          //write your code here
            for(row = 0; row < size ; row ++)
          {
              for (column = 0 ; column < size ; column ++)
              {
                  printf("MA[%d][%d] = %d \n",row,column,data.MA[row][column]);
              }
          }
          printf("MATRIX: The B array is;\n");
          //write your code here
            for(row = 0; row < size ; row ++)
          {
              for (column = 0 ; column < size ; column ++)
              {
                  printf("MB[%d][%d] = %d \n",row,column,data.MB[row][column]);
              }
          }

          /* Process Matrix, by row, column. */
          //write your code here
          pthread_t threads[ARRAY_SIZE];
            int i;
            data.col = 0;
            data.row = 0;
            int s  = 3;
            while(s--){
                for ( i = 0; i < 3; i++) {

                    if(pthread_create(&threads[i], NULL, multi, &data)!= 0){
                        perror("pthread_create"), exit(1);

                    }else
                    {

                        printf("\n thread number = %d\n",i);
                    }

                }
                for(i=0;i < 3; i++){
                    if(pthread_join(threads[i], NULL) != 0){
                    perror("pthread_join"), exit(1);
                    }
                }
                data.col=0;
                data.row++;
            }

        //
        //for(i=0;i < 9; i++){
        //if(pthread_join(threads[i], NULL) != 0){
        //        perror("pthread_join"), exit(1);
        //    }
        //}

          /* Print results */
          printf("MATRIX: The resulting matrix C is;\n");
          //write your code here
           for(row = 0; row < size ; row ++)
          {
              for (column = 0 ; column < size ; column ++)
              {
                  printf("MC[%d][%d] = %d \n",row,column,data.MC[row][column]);
              }
          }
          return 0;
        }
