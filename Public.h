/***************************************************************

File name:  Public.h

Author: SanBin      Version: V1.0    Date: 2013-8

Description: �����������͡�����

History:  1. Date:
                    Author:
                    Modification:
***************************************************************/

#ifndef PUBLIC_H_
#define PUBLIC_H_


//����������Ź�
#define KickDog() asm("wdr")


//������������
/*********************************************************************
  ������: DogInit
  ����:     �ڲ����Ź���ʼ��
  ����:     ��
  ���:     ��
  ����:     ��
  ����:     ��
*********************************************************************/
extern void DogInit( void );


/*********************************************************************
  ������: Asc2Hex
  ����:     ASC��תʮ��������
  ����:     ASC��
  ���:     ��
  ����:     ʮ�������� �����������ֵ���ںϷ�ASCII��ֵ�ڣ�������0
  ����:     ��
*********************************************************************/
extern UINT8 Asc2Hex( UINT8 asc );


/*********************************************************************
  ������: Hex2Asc
  ����:     ʮ��������תASC
  ����:     ʮ���������ֽڣ�UINT8
  ���:     ��
  ����:     2��ASCIIֵ����UINT16���У����ߵ��ֽ�˳���š�
  ����:     ��
*********************************************************************/
extern UINT16 Hex2Asc( UINT8 hex );

/*********************************************************************
  ������:	CalCRC16
  ����:		CRC16У��
  ����:		��ҪУ��������׵�ַptr��UINT8*
				���鳤��len��UINT16��
  ���:     ��
  ����:     CRC16У����
  ����:     ��
*********************************************************************/
extern UINT16 CalCRC16( volatile UINT8 *ptr, UINT16 len, UINT16 Polynomial );

/*********************************************************************
  ������:	SystemInit
  ����:		ϵͳ��ʼ��
  ����:		��
  ���:     ��
  ����:     ��
  ����:     ��
*********************************************************************/
extern void SystemInit( void );


#endif