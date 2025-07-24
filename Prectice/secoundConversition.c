#include <stdio.h>

int main()
{
    int sec, min, hou, day;
    printf("Enter time (s): ");
    scanf("%d", &sec);

    if (sec >= 86400)
    {
        day = sec / 86400;
        int remain = sec % 86400;
        if (remain >= 3600)
        {
            hou = remain / 3600;
            remain = remain % 3600;
            if (remain >= 60)
            {
                min = remain / 60;
                sec = remain % 60;
            }
            else
            {
                min = 0;
                sec = remain;
            }
        }
        else if (remain >= 60)
        {
            hou = 0;
            min = remain / 60;
            sec = remain % 60;
        }
        else
        {
            hou = min = 0;
            sec = remain;
        }
    }
    else if (sec >= 3600)
    {
        hou = sec / 3600;
        int remain = sec % 3600;
        if (remain >= 60)
        {
            min = remain / 60;
            sec = remain % 60;
        }
        else
        {
            sec = remain;
        }
    }

    printf("%dd %dh %dm %ds", day, hou, min, sec);
    return 0;
}