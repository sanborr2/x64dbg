/* string_reverse: returns the reverse of a character string array        *
*            args: string, the string array to be reversed                *
*          Return: copy_ptr, the pointer to the reversed array            */
# include <stdio.h>

void string_reverse1(char *string);
static int size_of(char *the_strg);
char *string_reverse2(const char *string);

void main(){
	char string[] = "hello";
	char string2[] = "hello";
	printf(string);
	printf(string2);

	string_reverse1(&string[0]);
	printf(string);

	printf(string_reverse2(&string2[0]));
}


void string_reverse1(char *string)
{
    /* your code here */

	char *holder;
	char *rev_ptr = &(string[0]);
	int ln = size_of(rev_ptr);
	int revtimes = (ln - 1) / 2;

	int j = 0;

	/*reverse the order of the character string array */
	while ( j < (revtimes) ){
		*holder = rev_ptr[j];
		rev_ptr[j] = rev_ptr[ln - 2 - j];
		rev_ptr[ln - 2 - j] = *holder;
		j++;

	}

	/* Make certain string terminates with a '/0'*/
	rev_ptr[ln - 1] = '\0';

	/* make certain that no chars were missed*/
	if ( ln % 2 == 0){
		rev_ptr[revtimes] = string[revtimes];
	} else{}

}


/*  size_of: returns the size of a character string array *
*      args: the_strg                                     *
*    Return: size                                         */

static int size_of(char *the_strg){
	int size = 1;
	char *ch_ptr = &(the_strg[0]);

	while(*ch_ptr != '\0'){
		ch_ptr++;
		size++;
	}

	return size;
}

/* string_reverse2: returns the reverse of a character string array        *
*             args: string, the string array to be reversed                *
*           return: copy_ptr, the pointer to the reversed array            */

char *string_reverse2(const char *string)
{
    /* your code here */

	char *copy_ptr = &(string[0]);
	char *ch_pointer = &(string[0]);
	int length = size_of(copy_ptr);
	int revtms = (length - 1);
	char copy_strg[length];
	int i = 0;




	/*reverse the order of the character string array */
	while(i < (revtms) ){
		copy_strg[length - i - 2] = *ch_pointer;
		ch_pointer++;
		i++;
	}

	/* Make certain string terminates with a '/0'*/
	copy_strg[length -1] = '\0';
	copy_ptr = &(copy_strg[0]);

	return copy_ptr;
}
