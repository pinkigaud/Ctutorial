// Write a function to convert calsius to farhenheit.
#include <stdio.h>
float celsiusToFahrenheit(float celsius);
int main()
{
    float celsius;
    printf("Enter the value of temperature in celsius:\n");
    scanf("%f", &celsius);
    printf("The value of temperature in fahrenheit is %f\n", celsiusToFahrenheit(celsius));
    return 0;
}
float celsiusToFahrenheit(float celsius)
{
    if (celsius == 0)
        return 32;
    float celsiusToFarhenheitNm1 = celsiusToFahrenheit(celsius - 1);
    float celsiusToFarhenheitN = celsiusToFarhenheitNm1 + 1.8;
    return celsiusToFarhenheitN;
}