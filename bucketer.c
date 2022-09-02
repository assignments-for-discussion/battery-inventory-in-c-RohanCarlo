#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
  int lowCycleArray[100];
  int mediumCycleArray[100];
  int highCycleArray[100];
 
  
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  int a=0;
 
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  for(int i=0; i<=; i++)
  {
    for(int j=0; j<numberOfBatteries; j++)
    {
      
    if(chargeCycleCounts[i]<400)
    {
      counts.lowCycleArray[j]=chargeCycleCounts[i];       //adding the charge cycle count to an array storing low cycle counts for future reference
      counts.lowCount++;                                  //incrementing lowCount if batterycycles is less than 400
    }
    if(chargeCycleCounts[i]>=400 && chargeCycleCounts[i]<=919)
    {
      counts.mediumCycleArray[j]=chargeCycleCounts[i];    //adding the charge cycle count to an array storing medium cycle counts for future reference
      counts.mediumCount++;                               //incrementing mediumCount if batterycycles is between 400 and 919
    }
    if(chargeCycleCounts[i]>=920)
    {
      counts.highCycleArray[j]=chargeCycleCounts[i];      //adding the charge cycle count to an array storing high cycle counts for future reference
      counts.highCount++;                                 //incrementing highCount if batterycycles is more than 920
    }
    
    }
}   
       
      

  printf("Low cycle count = %d\n",counts.lowCount);
  printf("Medium cycle count = %d\n",counts.mediumCount);
  printf("High cycle count = %d\n",counts.highCount);
  
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
