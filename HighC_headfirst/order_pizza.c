#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[]){
    char *delivery = "";
    int thick = 0;
    int count = 0;
    int wishes = 0;
    char ch;

    while ((ch = getopt(argc, argv , "d:tw")) != EOF )
        switch (ch){
            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            case 'w':
                wishes = 1;
                break;  //记得break，不然return1就程序停止了
            default:
                fprintf(stderr,"Unknown option: '%s'\n", optarg);
                return 1;
        }
    argc -= optind;
    argv += optind;

    if(thick)
        puts("Thick curst.");

    if(wishes)
        puts("Happy new year!");

    if(delivery[0])
        printf("To be delivered in %s.\n", delivery);



    puts("Ingredients:");
    for (count = 0; count < argc; count++)
        puts(argv[count]);

    return 0;
}
