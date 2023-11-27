#include "main.h"
#include <elf.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_STATUS 98
#define ELF_MAGIC "\177ELF"

/**
 * main - main function for entry
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on successful execution
 */

int main(int argc, char *argv[])
{
	int file_desc, iterator, no_of_bytes_read;
	Elf64_Ehdr _the_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage:elf_header elf_filename\n");
		return (ERROR_STATUS);
	}

	file_desc = open(argv[1], O_RDONLY);
	if (file_desc == -1)
	{
		fprintf(stderr, "Error: Can't open file\n");
		return (ERROR_STATUS);
	}
	no_of_bytes_read = read(file_desc, &_the_header, sizeof(_the_header));
	if (no_of_bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read file\n");
		close(file_desc);
		return (ERROR_STATUS);
	}

	if (memcmp(_the_header.e_ident, ELF_MAGIC, strlen(ELF_MAGIC)) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		return (ERROR_STATUS);
	}

	printf("Magic: ");
	for (iterator = 0; iterator < EI_NIDENT; iterator++)
	{
		printf("%02x ", _the_header.e_ident[iterator]);
	}
	putchar('\n');

	printf("Class:                             %s\n", _the_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", _the_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d\n", _the_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %d\n", _the_header.e_ident[EI_OSABI]);
	printf("Type:                              %s\n", _the_header.e_type == ET_REL ? "REL (Relocatable file)" : _the_header.e_type == ET_EXEC ? "EXEC (Executable file)" : _the_header.e_type == ET_DYN ? "DYN (Shared object file)" : "None");
	printf("Entry point address:               %#lx\n", _the_header.e_entry);

	close(file_desc);
	return (0);
}
