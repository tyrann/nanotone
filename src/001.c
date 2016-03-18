/* Compile using gcc -o a a.c -lm
 * For Pulse Audio run: ./a | pacat --format u8 --rate 8000
 */
int main(x,t) { for(;;t++,x+=2){putchar(4+t*3&(t>>7)+34-x);} }
