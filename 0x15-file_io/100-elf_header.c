#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_addr - Entry point
 * @ptr: the magic.
 * Return: no return type.
 */
void print_addr(char *ptr)
{
	int x;
	int start;
	char system;

	printf("  Entry point address:               0x");

	system = ptr[4] + '0';
	if (system == '1')
	{
		start = 26;
		printf("80");
		for (x = start; x >= 22; x--)
		{
			if (ptr[x] > 0)
				printf("%x", ptr[x]);
			else if (ptr[x] < 0)
				printf("%x", 256 + ptr[x]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (system == '2')
	{
		start = 26;
		for (x = start; x > 23; x--)
		{
			if (ptr[x] >= 0)
				printf("%02x", ptr[x]);

			else if (ptr[x] < 0)
				printf("%02x", 256 + ptr[x]);

		}
	}
	printf("\n");
}

/**
 * print_type - func, outputs type
 * @ptr: the magic.
 * Return: no return type.
 */
void print_type(char *ptr)
{
	char is_type = ptr[16];

	if (ptr[5] == 1)
		is_type = ptr[16];
	else
		is_type = ptr[17];

	printf("  Type:                              ");
	if (is_type == 0)
		printf("NONE (No file type)\n");
	else if (is_type == 1)
		printf("REL (Relocatable file)\n");
	else if (is_type == 2)
		printf("EXEC (Executable file)\n");
	else if (is_type == 3)
		printf("DYN (Shared object file)\n");
	else if (is_type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", is_type);
}

/**
 * print_osabi - func, outputs osabi
 * @ptr: magic.
 * Return: no return.
 */
void print_osabi(char *ptr)
{
	char osa = ptr[7];

	printf("  OS/ABI:                            ");
	if (osa == 0)
		printf("UNIX - System V\n");
	else if (osa == 2)
		printf("UNIX - NetBSD\n");
	else if (osa == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osa);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - func, outputs version
 * @ptr: the magic.
 * Return: no return type.
 */
void print_version(char *ptr)
{
	int v = ptr[6];

	printf("  Version:                           %d", v);

	if (v == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - func, outputs data
 * @ptr: the magic.
 * Return: no return type.
 */
void print_data(char *ptr)
{
	char dt = ptr[5];

	printf("  Data:                              2's complement");
	if (dt == 1)
		printf(", little endian\n");

	if (dt == 2)
		printf(", big endian\n");
}
/**
 * print_magic - function, outputs magic information
 * @ptr: the magic.
 * Return: no return type.
 */
void print_magic(char *ptr)
{
	int no_bytes;

	printf("  Magic:  ");

	for (no_bytes = 0; no_bytes < 16; no_bytes++)
		printf(" %02x", ptr[no_bytes]);

	printf("\n");

}

/**
 * check_sys -function that  checks system version
 * @ptr: the magic.
 * Return: no return type.
 */
void check_sys(char *ptr)
{
	char sy = ptr[4] + '0';

	if (sy == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (sy == '1')
		printf("  Class:                             ELF32\n");

	if (sy == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - function that checks if it is an elf file.
 * @ptr: the magic.
 * Return: returns 1 (if it is an elf file) 0 (if not).
 */
int check_elf(char *ptr)
{
	int address = (int)ptr[0];
	char EE = ptr[1];
	char LL = ptr[2];
	char FF = ptr[3];

	if (address == 127 && EE == 'E' && LL == 'L' && FF == 'F')
		return (1);

	return (0);
}

/**
 * main - function that checks the code for Holberton School students.
 * @argc: the no. of args.
 * @argv: the args vector.
 * Return: returns (0) success
 */
int main(int argc, char *argv[])
{
	int f_d, rt_rd;
	char pt[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	f_d = open(argv[1], O_RDONLY);

	if (f_d < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(f_d, 0, SEEK_SET);
	rt_rd = read(f_d, pt, 27);

	if (rt_rd == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(pt))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(pt);
	close(f_d);

	return (0);
}
