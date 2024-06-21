#include <stdio.h>
class Fixed
{
    protected:
        int value;
    public:
        
        Fixed(int intr,int part){
            value=intr*100+part;
        }
        Fixed(){
            value=0;
        }
        Fixed(Fixed& obj){
             value=obj.value;
        }
        Fixed operator+(Fixed& obj){
            Fixed ress;
            ress.value=value + obj.value;
            return ress ;
        }
        Fixed operator-(Fixed&  obj){
            Fixed ress;
            ress.value=value - obj.value;
            return ress ;
        }
        Fixed operator*(Fixed& obj){
            Fixed ress;
            ress.value=value * (obj.value/100);
            return ress ;
        }
        Fixed operator/(Fixed&   obj){
            Fixed ress;
            ress.value=value / (obj.value/100);
            return ress ;
        }

        void operator=(int i){
            
            value = i*100;
        }
        int gets(){
        
            return  value/100;
        }
        void setpart(int i){
            value=value+i;
            
        }
        void report(){
            int i=value/100;
            int ii=value-(i*100);
            if (ii<0){
                ii=-ii;
            }
            printf("%d.%02d ",i,ii);
        }
        
};

int main(){
    Fixed Fixed1(10,0);
    Fixed Fixed2(11,0);
    char c='\0';
    int a=0;
    int n=0;
    printf("\e[43;37m\n");
    for (a=0;a<16;a++){
        c='+';
        Fixed1=a;
        Fixed2=(int)10;
        Fixed1.report();
        printf("%c ",c);
        Fixed2.report();
        c='=';
        printf("%c ",c);
        Fixed1=Fixed1 + Fixed2;
        Fixed1.report();
        c='\n';
        printf("%c",c);
        c='-';
        Fixed1=a;
        Fixed2=(int)10;
        Fixed1.report();
        printf("%c ",c);
        Fixed2.report();
        c='=';
        printf("%c ",c);
        Fixed1=Fixed1 - Fixed2;
        Fixed1.report();
        c='\n';
        printf("%c",c);
        c='*';
        Fixed1=a;
        Fixed2=(int)10;
        Fixed1.report();
        printf("%c ",c);
        Fixed2.report();
        c='=';
        printf("%c ",c);
        Fixed1=Fixed1 * Fixed2;
        Fixed1.report();
        c='\n';
        printf("%c",c);
        c='/';
        Fixed1=a;
        Fixed2=(int)10;
        Fixed1.report();
        printf("%c ",c);
        Fixed2.report();
        c='=';
        printf("%c ",c);
        Fixed1=Fixed1 / Fixed2;
        Fixed1.report();
        c='\n';
        printf("%c",c);
    }
    return 0;
}
