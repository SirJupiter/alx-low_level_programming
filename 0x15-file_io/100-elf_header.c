#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * display_error - displays error message
 * @msg: error message
*/
void display_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * display_elf_header - displays elf header
 * @filename: name of file
*/
void display_elf_header(const char *filename)
{
	int file_desc, iterator;
	Elf64_Ehdr elf_header;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		display_error("Error opening file");

	if (read(file_desc, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		display_error("Error reading ELF header");

	close(file_desc);

	/*Check ELF magic number*/
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
		display_error("Not an ELF file");

	/* Display ELF header information*/
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (iterator = 0; iterator < EI_NIDENT; ++iterator)
		printf("%02x ", elf_header.e_ident[iterator]);

	printf("\n");
	printf("  Class:                             %s\n",
	elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian"
	: "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
	elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
	elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
	elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               %#lx\n",
	(unsigned long)elf_header.e_entry);

}

/**
 * main - main function
 * @argc: arggc
 * @argv: argv
 *
 * Return: 0 on successful execution
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	display_elf_header(argv[1]);

	return (0);
}
