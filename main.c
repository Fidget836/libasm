#include "libasm.h"

int main()
{
	/***** FT_STRLEN *****/
	printf("/***** FT_STRLEN *****/\n");
	printf("Hello World !\n");
	printf("STRLEN: %ld\n", strlen("Hello World !"));
	printf("FT_STRLEN : %ld\n\n", ft_strlen("Hello World !"));

	printf("Le Lorem Ipsum est simplement du faux texte employé dans la composition et la mise en page avant impression. Le Lorem Ipsum est le faux texte standard de l'imprimerie depuis les années 1500, quand un imprimeur anonyme assembla ensemble des morceaux de texte pour réaliser un livre spécimen de polices de texte. Il n'a pas fait que survivre cinq siècles, mais s'est aussi adapté à la bureautique informatique.\n");
	printf("STRLEN: %ld\n", strlen("Le Lorem Ipsum est simplement du faux texte employé dans la composition et la mise en page avant impression. Le Lorem Ipsum est le faux texte standard de l'imprimerie depuis les années 1500, quand un imprimeur anonyme assembla ensemble des morceaux de texte pour réaliser un livre spécimen de polices de texte. Il n'a pas fait que survivre cinq siècles, mais s'est aussi adapté à la bureautique informatique."));
	printf("FT_STRLEN : %ld\n\n", ft_strlen("Le Lorem Ipsum est simplement du faux texte employé dans la composition et la mise en page avant impression. Le Lorem Ipsum est le faux texte standard de l'imprimerie depuis les années 1500, quand un imprimeur anonyme assembla ensemble des morceaux de texte pour réaliser un livre spécimen de polices de texte. Il n'a pas fait que survivre cinq siècles, mais s'est aussi adapté à la bureautique informatique."));

	printf("\n");
	printf("STRLEN: %ld\n", strlen(""));
	printf("FT_STRLEN : %ld\n\n", ft_strlen(""));


	/***** FT_STRCPY *****/
	char src1[] = "Hello World !";
	char src2[] = "Ceci est un test";
	char src3[] = "";
	char src4[] = "Hello World !!!";
	char dest1[50];
	char dest2[50];
	printf("/***** FT_STRCPY *****/\n");
	printf("%s\n", src1);
	printf("STRCPY: %s\n", strcpy(dest1, src1));
	printf("FT_STRCPY: %s\n\n", ft_strcpy(dest2, src1));

	printf("%s\n", src2);
	printf("STRCPY: %s\n", strcpy(dest1, src2));
	printf("FT_STRCPY: %s\n\n", ft_strcpy(dest2, src2));

	printf("%s\n", src3);
	printf("STRCPY: %s\n", strcpy(dest1, src3));
	printf("FT_STRCPY: %s\n\n", ft_strcpy(dest2, src3));


	/***** FT_STRCMP *****/
	printf("/***** FT_STRCMP *****/\n");
	printf("S1 :%s ||| S2 : %s\n", src1, src2);
	printf("STRCMP : %d\n", strcmp(src1, src2));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src1, src2));

	printf("S1 :%s ||| S2 : %s\n", src1, src1);
	printf("STRCMP : %d\n", strcmp(src1, src1));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src1, src1));

	printf("S1 :%s ||| S2 : %s\n", src2, src1);
	printf("STRCMP : %d\n", strcmp(src2, src1));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src2, src1));

	printf("S1 :%s ||| S2 : %s\n", src3, src1);
	printf("STRCMP : %d\n", strcmp(src3, src1));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src3, src1));
	
	printf("S1 :%s ||| S2 : %s\n", src1, src3);
	printf("STRCMP : %d\n", strcmp(src1, src3));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src1, src3));

		printf("S1 :%s ||| S2 : %s\n", src1, src4);
	printf("STRCMP : %d\n", strcmp(src1, src4));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src1, src4));

		printf("S1 :%s ||| S2 : %s\n", src4, src1);
	printf("STRCMP : %d\n", strcmp(src4, src1));
	printf("FT_STRCMP : %ld\n\n", ft_strcmp(src4, src1));


	/***** FT_WRITE && FT_READ*****/
	printf("/***** FT_WRITE && FT_READ *****/\n");

	char bufferWrite[128];
    ssize_t bytesRead, bytesWritten;

    // Read from stdin (should work if you type something)
    bytesRead = read(0, bufferWrite, sizeof(bufferWrite));
    if (bytesRead < 0) {
        perror("Read failed");
    } else {
        printf("Read success: %ld bytes read\n", bytesRead);
    }

	    // Write to stdout (should work)
    bytesWritten = write(1, bufferWrite, bytesRead);
    if (bytesWritten < 0) {
        perror("Write failed");
    } else {
        printf("Write success: %ld bytes written\n\n", bytesWritten);
    }



	char bufferFtWrite[128];
    ssize_t bytesFtRead, bytesFtWritten;

    // Read from stdin (should work if you type something)
    bytesFtRead = ft_read(0, bufferFtWrite, sizeof(bufferFtWrite));
    if (bytesFtRead < 0) {
        perror("Ft_read failed");
    } else {
        printf("Ft_read success: %ld bytes read\n", bytesFtRead);
    }

	// Write to stdout (should work)
    bytesFtWritten = ft_write(1, bufferFtWrite, bytesRead);
    if (bytesFtWritten < 0) {
        perror("Ft_write failed");
    } else {
        printf("Ft_write success: %ld bytes written\n\n", bytesFtWritten);
    }


	/***** FT_STRDUP *****/
	printf("/***** FT_STRDUP *****/\n");
	printf("STRDUP: %s\n", strdup("Hello, World!"));
	printf("FT_STRDUP: %s\n", ft_strdup("Hello, World!"));

	printf("STRDUP: %s\n", strdup("Ceci est une tres longue phrase pour faire un exemple"));
	printf("FT_STRDUP: %s\n", ft_strdup("Ceci est une tres longue phrase pour faire un exemple"));

	printf("STRDUP: %s\n", strdup(""));
	printf("FT_STRDUP: %s\n", ft_strdup("test"));

	return (0);
}