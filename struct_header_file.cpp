#include <iostream>
#include "header_file.h"
main()
{
	struct student s;
	struct student *p;
	p=&s;
	p->input();
	p->output();
}

