#include <stdio.h>
int main(void){
    int i = 0;
    while (i < 8) {
    
            int j = 0;
            while (j < 8){
            
                    if (i % 2 == 0) {printf( "%s", "* " );}
                    else if (i % 2 != 0) {printf( "%s", " *" );}
                    ++j;
                    }
                    puts( "" );
                    ++i;
                    }
}


