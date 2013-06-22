/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PTPOperationRequestPacket : NSObject
{
    int _numParameters;
    unsigned int _dataPhaseInfo;
    unsigned short _operationCode;
    unsigned int _transactionID;
    unsigned int _parameters[5];
}

- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 numParameters:(unsigned long)arg4 parameters:(unsigned int *)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6 parameter4:(unsigned long)arg7;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6 parameter4:(unsigned long)arg7 parameter5:(unsigned long)arg8;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithUSBBuffer:(void *)arg1;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned long)arg2;
- (id)description;
- (unsigned short)operationCode;
- (void)setOperationCode:(unsigned short)arg1;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)dataPhaseInfo;
- (void)setDataPhaseInfo:(unsigned long)arg1;
- (int)numParameters;
- (unsigned long)parameterAtIndex:(unsigned long)arg1;
- (void)setPparameter:(unsigned long)arg1 atIndex:(unsigned long)arg2;
- (unsigned long)parameter1;
- (void)setParameter1:(unsigned long)arg1;
- (unsigned long)parameter2;
- (void)setParameter2:(unsigned long)arg1;
- (unsigned long)parameter3;
- (void)setParameter3:(unsigned long)arg1;
- (unsigned long)parameter4;
- (void)setParameter4:(unsigned long)arg1;
- (unsigned long)parameter5;
- (void)setParameter5:(unsigned long)arg1;

@end
