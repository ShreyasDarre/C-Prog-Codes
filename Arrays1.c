main()
{
    int a[10],i,sum=0;  //array is a group of similar variables.
    //Index starts from 0 to n-1
    float avg;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
        sum=sum+a[i];
    avg = sum/10.0;
    printf("Sum is %d\n",sum);
    printf("Avg is %f\n",avg);
}
