    #include <stdio.h>

    struct student {
        int   roll;
        char  name[30];
        int   marks[3];
        int   total;
        float per;
    };

    int main() {
        struct student s[50];
        int n, i;

        printf("Enter the number of students: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            printf("Enter the details of students(Roll no , Name, Marks of 3 subjects): ");
            scanf("%d %s %d %d %d", 
                &s[i].roll, 
                s[i].name,
                &s[i].marks[0], 
                &s[i].marks[1], 
                &s[i].marks[2]);

            s[i].total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
            s[i].per   = s[i].total / 3.0;
        }

        printf("\nRoll No\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");
        for (i = 0; i < n; i++) {
            printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",
                s[i].roll,
                s[i].name,
                s[i].marks[0],
                s[i].marks[1], 
                s[i].marks[2],
                s[i].total, 
                s[i].per);
        }
        return 0;
    }