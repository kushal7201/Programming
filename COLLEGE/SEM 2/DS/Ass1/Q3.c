#include<stdio.h>

float* download_time(float speed, float size, float a[3])
{
    float time = size/speed;
    a[2] = (int)time%60 + time - (int)time;
    a[1] = ((int)time/60)%60;
    a[0] = (int)time/3600;
    return a;
}

int main()
{
    float speed, size, arr[3];
    printf("Enter speed(in Mbps) and size(in Mb): ");
    scanf("%f %f", &speed, &size);
    download_time(speed, size, arr);
    printf("It'll be downloaded in %f hours, %f minutes, %f seconds", arr[0], arr[1], arr[2]);
    return 0;
}