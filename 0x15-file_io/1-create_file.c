#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success,
 * -1 on failure (file cannot be created, file cannot be written, etc.),
 * -1 if filename is NULL,
 *  emplty file if 'text_content' is NULL
 */
