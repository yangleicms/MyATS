/////////////////////////////////////////////////////////////////////////
///@company shanghai liber information Technology Co.,Ltd
///@file SecurityFtdcL2MDUserApiDataType.h
///@brief ����ҵ����������
/////////////////////////////////////////////////////////////////////////

#ifndef SECURITY_L2MD_FTDCDATATYPE_H
#define SECURITY_L2MD_FTDCDATATYPE_H

#include "LTS_ns.h"

_LTS_NS_BEGIN_

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcErrorIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorMsgType��һ��������Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcBrokerIDType��һ�����͹�˾��������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcBrokerIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserIDType��һ���û���������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcUserIDType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserNameType��һ���û���������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcUserNameType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcPasswordType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcPasswordType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeIDType��һ����������������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcExchangeIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentIDType��һ����Լ��������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcInstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
///TFtdcDateType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcDateType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeType��һ��ʱ������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcTimeType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceType��һ���۸�����
/////////////////////////////////////////////////////////////////////////
typedef double TSecurityFtdcPriceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLargeVolumeType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef double TSecurityFtdcLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcRatioType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef double TSecurityFtdcRatioType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMoneyType��һ���ʽ�����
/////////////////////////////////////////////////////////////////////////
typedef double TSecurityFtdcMoneyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceLevelType��һ���۸��������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcPriceLevelType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBoolType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcBoolType;

/////////////////////////////////////////////////////////////////////////
///TFtdcIndexType��һ��ָ������
/////////////////////////////////////////////////////////////////////////
typedef double TSecurityFtdcIndexType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDataLevelType��һ���������ݵȼ�����
/////////////////////////////////////////////////////////////////////////
///ȫ������
#define SECURITY_FTDC_DL_FULL '0'
///L10����
#define SECURITY_FTDC_DL_L10 '1'
///L5����
#define SECURITY_FTDC_DL_L5 '2'
///�㲥����
#define SECURITY_FTDC_DL_Broadcast '3'

typedef char TSecurityFtdcDataLevelType;

/////////////////////////////////////////////////////////////////////////
///TFtdcIPAddressType��һ��IP��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcIPAddressType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcIPPortType��һ��IP�˿�����
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcIPPortType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBeginStringType��һ��step��ʼ������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcBeginStringType[17];

/////////////////////////////////////////////////////////////////////////
///TFtdcBodyLengthType��һ����Ϣ�峤������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcBodyLengthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMsgTypeType��һ����Ϣ��������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcMsgTypeType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcSenderCompIDType��һ�����ͷ���������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcSenderCompIDType[33];

/////////////////////////////////////////////////////////////////////////
///TFtdcTargetCompIDType��һ�����շ���������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcTargetCompIDType[33];

/////////////////////////////////////////////////////////////////////////
///TFtdcMsgSeqNumType��һ��ͷ��Ϣ��ű�ǩ34����
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcMsgSeqNumType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSendingTimeType��һ������ʱ������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcSendingTimeType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcMessageEncodingType��һ����Ϣ��Encoded����ַ�������������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcMessageEncodingType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcCheckSumType��һ��У�������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcCheckSumType;

/////////////////////////////////////////////////////////////////////////
///TFtdcEncryptMethodType��һ�����ܷ�������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcEncryptMethodType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcHeartBtIntType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcHeartBtIntType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInterfaceVersionType��һ���������ݽӿڰ汾������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcInterfaceVersionType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcMsgSeqIDType��һ����Ϣ��ű�ǩ10072����
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcMsgSeqIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcGroupIDType��һ���������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcGroupIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcGroupNoType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int TSecurityFtdcGroupNoType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderKindType��һ��������������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcOrderKindType[2];

/////////////////////////////////////////////////////////////////////////
///TFtdcFunctionCodeType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcFunctionCodeType[2];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingPhaseType��һ�����׽׶�����
/////////////////////////////////////////////////////////////////////////
///�ǽ���ʱ��
#define SECURITY_FTDC_TP_NonTrade '0'
///���Ͼ���ʱ��
#define SECURITY_FTDC_TP_Bidding '1'
///��������ʱ��
#define SECURITY_FTDC_TP_Continuous '2'
///ͣ��ʱ��
#define SECURITY_FTDC_TP_Suspension '3'
///�������۶�ʱ��
#define SECURITY_FTDC_TP_Fuse '4'
///�ɻָ��۶�ʱ��
#define SECURITY_FTDC_TP_RecovFuse '5'
///���ɻָ��۶�ʱ��
#define SECURITY_FTDC_TP_UnrecovFuse '6'
///���Ͼ��۽���ʱ��
#define SECURITY_FTDC_TP_BiddingOver '7'
///��ʱͣ��ʱ��
#define SECURITY_FTDC_TP_TempSuspension '8'

typedef char TSecurityFtdcTradingPhaseType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOpenRestrictionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///�޿�������
#define SECURITY_FTDC_OR_None '0'
///���Ʊ��ҿ���
#define SECURITY_FTDC_OR_NoCoverOpen '1'
///������������
#define SECURITY_FTDC_OR_NoSellOpen '2'
///�����������֡����ҿ���
#define SECURITY_FTDC_OR_NoSellAndCoverOpen '3'
///�������뿪��
#define SECURITY_FTDC_OR_NoBuyOpen '4'
///�������뿪�֡����ҿ���
#define SECURITY_FTDC_OR_NoBuyAndCoverOpen '5'
///�������뿪�֡���������
#define SECURITY_FTDC_OR_NoBuyAndSellOpen '6'
///�������뿪�֡��������֡����ҿ���
#define SECURITY_FTDC_OR_NoBuySellAndCoverOpen '7'

typedef char TSecurityFtdcOpenRestrictionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderBSFlagType��һ�������̱�־����
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcOrderBSFlagType[2];

/////////////////////////////////////////////////////////////////////////
///TFtdcMDStreamIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcMDStreamIDType[4];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentStatusType��һ����Լ״̬����
/////////////////////////////////////////////////////////////////////////
typedef char TSecurityFtdcInstrumentStatusType[7];

_LTS_NS_END_

#endif