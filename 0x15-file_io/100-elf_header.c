#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkElf(unsigned char *e_ident);
void printMagic(unsigned char *e_ident);
void printClass(unsigned char *e_ident);
void printData(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printAbi(unsigned char *e_ident);
void printOsabi(unsigned char *e_ident);
void printType(unsigned int e_type, unsigned char *e_ident);
void printEntry(unsigned long int e_entry, unsigned char *e_ident);
void closeElf(int elf);

/**
 * checkElf - Entry point
 * Description: Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *Exit  Description: If the file is not an ELF file - exit code 98.
 */

void checkElf(unsigned char *e_ident)
{
	int ind;

	ind = 0;
	while (ind < 4)
	{
		if (e_ident[ind] != 127 &&
		    e_ident[ind] != 'E' &&
		    e_ident[ind] != 'L' &&
		    e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: It is not an ELF file\n");
			exit(98);
		}
		ind++;
	}
}

/**
 * printMagic - Entry point
 * Description: Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array
 *
 */

void printMagic(unsigned char *e_ident)
{
	int ind;

	printf(" Magic: ");

	ind = 0;
	while (ind < EI_NIDENT)
	{
		printf("%02x", e_ident[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		ind++;
	}
}

/**
 * printClass - Entry point
 * Description: Prints the class of ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 */

void printClass(unsigned char *e_ident)
{
	printf(" Class: ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("None\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * printData - Entry point
 * Description: Prints the data of an ELF header.
 * @e_ident: A pointer to array containing the ELF class.
 */

void printData(unsigned char *e_ident)
{
	printf(" Data: ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("None\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * printVersion - Entry point
 * Description: Prints the version of an ELF header.
 * @e_ident: A pointer to the array containing the ELF version.
 **/

void printVersion(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("  (current)\n");
	else
		printf("\n");
}

/**
 * printOsabi - Entry point
 * Description: Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to the array containing the ELF version.
 */

void printOsabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * printAbi - Entry point
 * Description: Prints the ABI version of an ELF header.
 * @e_ident: A pointer to the array containing the ELF ABI version.
 */

void printAbi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * printType - Entry point
 * Description: Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to the array containing the ELF class.
 */

void printType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * printEntry - Entry point
 * Description: Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to the array containing the ELF class.
 */

void printEntry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * closeElf - Entry point
 * Description: Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 * Exit description: If the file cannot be closed - exit code 98.
 */

void closeElf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot close file descriptor %d\n", elf);
		exit(98);
	}
}

/**
 * main - Entry point
 * Description: Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Exit description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeElf(op);
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		closeElf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkElf(header->e_ident);
	printf("ELF Header:\n");
	printMagic(header->e_ident);
	printClass(header->e_ident);
	printData(header->e_ident);
	printVersion(header->e_ident);
	printOsabi(header->e_ident);
	printAbi(header->e_ident);
	printType(header->e_type, header->e_ident);
	printEntry(header->e_entry, header->e_ident);

	free(header);
	closeElf(op);
	return (0);
}
