

#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");



    int a,b,c,ab,cb,a1,a2,b1,b2,c1,c2;
    printf("Enter Length of the first side:");
    scanf("%d",&a);
    printf("Enter Length of the second side:");
    scanf("%d",&b);
    printf("Enter Length of the third side:");
    scanf("%d",&c);

    c1 = (a*a)+(b*b);
    c2 = c*c;

    b1 = (a*a)+(c*c);
    b2 = (b*b);

    a1 = (b*b)+(c*c);
    a2 = (a*a);

    if
        (c1 == c2 || b1 == b2 || a1 == a2)
        printf("Both sides are equal, so a right triangle can be formed using %d,%d,%d.",a,b,c);

    else

        printf("The values of both sides are not equal, so a right triangle cannot be formed using %d,%d,%d.",a,b,c);


    return 0;


}

