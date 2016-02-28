/* Compile using gcc -o a a.c -lm
 * For Pulse Audio run: ./a | pacat --format u8 --rate 8000
 */
int main(t) { for(;;t++){putchar(t*3&(t>>7)+34);} }
