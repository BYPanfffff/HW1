#include <stdio.h>
#include <stdlib.h>

int main()
{
	float 	MilagePerDay, 	GasPrices, 	FuelConsumption, 	ParkingFee, 	Tolls;
			//�C�Ѩ��{		�o��		�o��	 			�����O 			�L���O 
	float people, cost, save;
	
	printf("��J�H�U��T�A�åB�H�Ů�@���j:\n");
	printf("�C�騽�{��		�o��		�o��		�����O		�L���O		���ȤH��(���t�q��)\n");
	scanf("%f %f %f %f %f %f", &MilagePerDay, &GasPrices, &FuelConsumption, &ParkingFee, &Tolls, &people);	
	
	cost = (MilagePerDay/FuelConsumption)*GasPrices+ParkingFee+Tolls;
	printf("\n\n�|���@���A�C��q���`���B��%.2f��\n", cost);
	
	if(people>1){
		printf("�P�±z�T�����O�@���A����%.0f�H�C��`��%.2f��\n", people, cost*people/(people+1));
	}
	system("pause");
	return 0;
}
