#include <stdio.h>
#include <stdlib.h>

int main()
{
	float 	MilagePerDay, 	GasPrices, 	FuelConsumption, 	ParkingFee, 	Tolls;
			//每天里程		油價		油耗	 			停車費 			過路費 
	float people, cost, save;
	
	printf("輸入以下資訊，並且以空格作間隔:\n");
	printf("每日里程數		油價		油耗		停車費		過路費		乘客人數(不含司機)\n");
	scanf("%f %f %f %f %f %f", &MilagePerDay, &GasPrices, &FuelConsumption, &ParkingFee, &Tolls, &people);	
	
	cost = (MilagePerDay/FuelConsumption)*GasPrices+ParkingFee+Tolls;
	printf("\n\n尚未共乘，每日通勤總金額為%.2f元\n", cost);
	
	if(people>1){
		printf("感謝您響應環保共乘，載客%.0f人每日節省%.2f元\n", people, cost*people/(people+1));
	}
	system("pause");
	return 0;
}
