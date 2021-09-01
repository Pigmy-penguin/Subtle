#include <uefi.h>
#include <vidmodes.h>

void die(void)
{
	exit(1);
}

int main()
{
    printf("Welcome to the SUBTLE Bootloader\n");
    int o = 50;
    while(o != 0)
    {
	    printf("Welcome\n");
	    o--;
    }
    usleep(5000000);
    efi_gop_t *gop = get_gop(); 
    if(gop == NULL)
	    die();
    if(print_info(gop) != 0)
	    die();
    int i = 50;
    while(i != 0)
    {
	    printf("Hello\n");
	    i--;
    }
    int a = 64;
    while(1 == 1)
    {
	a++;	
    }

    return 0;
}


