#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit,low, digits, sum, i, end;

    /* Input upper limit from user */
    printf("Enter lower limit and upper limit(using space): ");
    scanf("%d %d", &low,&end);

    printf("Armstrong number between %d to %d are: \n",low, end);

    for(i=low; i<=end; i++)
    {
        sum = 0;

        /* Copy the value of num for processing */
        num = i;

        /* Find total digits in num */
        digits = (int) log10(num) + 1;

        /* Calculate sum of power of digits */
        while(num > 0)
        {
            /* Extract last digit */
            lastDigit = num % 10;

            // Find sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastDigit, digits));

            /* Remove the last digit */
            num = num / 10;
        }

        /* Check for Armstrong number */
        if(i == sum)
        {
            printf("%d, ", i);
        }

    }

    return 0;
}
