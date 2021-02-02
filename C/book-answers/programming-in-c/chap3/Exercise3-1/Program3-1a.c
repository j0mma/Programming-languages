#include <stdio.h>

int main()
{
	//Integer type
	puts("\n");
	puts("Integer Type");

	int octalValue = 0177;
	int rgbColor = 0XFFEF0D;

	printf("%o\n", octalValue);
	printf("%#o\n", octalValue);
	printf("%x\n", rgbColor);
	printf("%#x\n", rgbColor);
	printf("%X\n", rgbColor);
	printf("%#X\n", rgbColor);

	//Floating number type
	float aFloat = 1.7;
	float bFloat = -1.7;
	float cFloat = 1.7e3;
	float dFloat = 1.7e-3;
	float eFloat = -1.7e3;
	float fFloat = -1.7e-3;
	float gFloat = 1.7e7;
	float hFloat = 1.7e-7;
	float iFloat = -1.7e7;
	float jFloat = -1.7e-7;

	puts("\n");
	puts("Floating number type");
	printf("%g\n", aFloat);
	printf("%g\n", bFloat);
	printf("%g\n", cFloat);
	printf("%g\n", dFloat);
	printf("%g\n", eFloat);
	printf("%g\n", fFloat);
	printf("%g\n", gFloat);
	printf("%g\n", hFloat);
	printf("%g\n", iFloat);
	printf("%g\n", jFloat);

	return 0;

}
