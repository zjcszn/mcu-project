#include"HONG.H"

void HONG_Init(void)
{
    GPIO_InitTypeDef GPIO_Initstruct;
		
    //--------------GPIO时钟初始化-=-------------------//
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
    
    //--------------KEY0初始化-------------------------//
    GPIO_Initstruct.GPIO_Mode=GPIO_Mode_IPU;
    GPIO_Initstruct.GPIO_Pin=GPIO_Pin_7;
    GPIO_Init(GPIOB,&GPIO_Initstruct);	
		
	  GPIO_Initstruct.GPIO_Mode=GPIO_Mode_Out_PP;
    GPIO_Initstruct.GPIO_Pin=GPIO_Pin_11;
		GPIO_Initstruct.GPIO_Speed=GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&GPIO_Initstruct);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
		GPIO_ResetBits(GPIOA,GPIO_Pin_11);
}

//u8 Gaizi(void)
//{
////	u8 temp=0xff;
////	if(GAIZI!=_gaizi_YOUXIAO)  //盖子没有合上
////	{
////		if(GAIZI)
////			delay_ms(100);
////	}  //盖子合�
////	if(GAIZI)  //盖子没有合上
////		temp=0x00;
////	else         //盖子合上 
////		temp=0xff;
////	return temp;
//	return 0;
//}

u8 Gaizi(void)
{
	if(GAIZI==0)
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_11);
		return 0;//盖子合�
	}
	else
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_11);
		delay_ms(20);
		if(GAIZI!=0) //盖子合上
		{
			GPIO_ResetBits(GPIOA,GPIO_Pin_11);
			return 0;
		}
		else
		{
			GPIO_ResetBits(GPIOA,GPIO_Pin_11); 
			return 1;
		}
	}
}

//void Set_1_Out()
//{
//		GPIO_InitTypeDef GPIO_Initstruct;
//		GPIO_Initstruct.GPIO_Mode=GPIO_Mode_Out_PP;
//		GPIO_Initstruct.GPIO_Pin=GPIO_Pin_7;
//		GPIO_Initstruct.GPIO_Speed=GPIO_Speed_50MHz;
//		GPIO_Init(GPIOB,&GPIO_Initstruct);	
//}
//void Set_2_Out()
//{
//		GPIO_InitTypeDef GPIO_Initstruct;
//		GPIO_Initstruct.GPIO_Mode=GPIO_Mode_Out_PP;
//		GPIO_Initstruct.GPIO_Pin=GPIO_Pin_11;
//		GPIO_Initstruct.GPIO_Speed=GPIO_Speed_50MHz;
//		GPIO_Init(GPIOA,&GPIO_Initstruct);	
//}

//void Set_1_In()
//{
//		GPIO_InitTypeDef GPIO_Initstruct;
//	  GPIO_Initstruct.GPIO_Mode=GPIO_Mode_IPU;
//    GPIO_Initstruct.GPIO_Pin=GPIO_Pin_7;
//    GPIO_Init(GPIOB,&GPIO_Initstruct);
//}

//void Set_2_In()
//{
//		GPIO_InitTypeDef GPIO_Initstruct;
//	  GPIO_Initstruct.GPIO_Mode=GPIO_Mode_IPU;
//    GPIO_Initstruct.GPIO_Pin=GPIO_Pin_11;
//    GPIO_Init(GPIOA,&GPIO_Initstruct);	
//}
//u8 Gaizi(void)
//{
//	if(GAIZI!=_gaizi_YOUXIAO)  //盖子没有合上
//	{
//		gaizi_delay();
//		if(GAIZI!=_gaizi_YOUXIAO)
//		{
//			gaizi_delay();
//			if(GAIZI!=_gaizi_YOUXIAO)
//			{
//				gaizi_delay();
//				if(GAIZI!=_gaizi_YOUXIAO)
//				{
//					gaizi_delay();
//					if(GAIZI!=_gaizi_YOUXIAO)
//					{
//						gaizi_delay();
//						if(GAIZI!=_gaizi_YOUXIAO)   //盖子没有合上
//						{
//							return 0x00;
//						}
//						else
//							return 0xff;
//					}
//					else
//						return 0xff;
//				}
//				else
//					return 0xff;
//			}
//			else
//				return 0xff;
//		}
//		else
//			return 0xff;
//	}
//	else
//		return 0xff;
//	
//}

//u8 Gaizi(void)
//{
//		GPIO_ResetBits(GPIOA,GPIO_Pin_11);
//			delay_ms(10);
//		if(GAIZI==_gaizi_YOUXIAO)  //盖子合上
//			return 0xff;
//		else    //没有合上，进行确认
//		{
//			GPIO_SetBits(GPIOA,GPIO_Pin_11);
//			delay_ms(10);
//			if(GAIZI!=_gaizi_YOUXIAO)  //盖子合上
//				return 0xff;
//			else   //没有合上，进行确认
//			{
//				GPIO_ResetBits(GPIOA,GPIO_Pin_11);
//				delay_ms(10);
//				if(GAIZI==_gaizi_YOUXIAO)  //盖子合上
//					return 0xff;
//				else  //没有合上，进行确认
//				{
//					GPIO_SetBits(GPIOA,GPIO_Pin_11);
//					delay_ms(10);
//					if(GAIZI!=_gaizi_YOUXIAO)  //盖子合上
//						return 0xff;
//					else
//						return 0x00;
//				}
//			}
//		}	
//}
//u8 Gaizi(void)
//{
//	GPIO_ResetBits(GPIOA,GPIO_Pin_11);
//}
