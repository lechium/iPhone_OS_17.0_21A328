//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSUUID, RPIdentity, RPNFCTransactionController, RPNearFieldTapEvent, RPTransportServiceHandoverMessage;

@protocol RPNFCTransactionControllerDataSource <NSObject>
- (RPNearFieldTapEvent *)transactionController:(RPNFCTransactionController *)arg1 tapEventForApplicationLabel:(NSString *)arg2 singleBandAWDLModeRequested:(_Bool)arg3 pkData:(NSData *)arg4 bonjourListenerUUID:(NSUUID *)arg5 identity:(RPIdentity *)arg6;
- (RPTransportServiceHandoverMessage *)transactionController:(RPNFCTransactionController *)arg1 responseMessageForRequestMessage:(RPTransportServiceHandoverMessage *)arg2;
- (RPTransportServiceHandoverMessage *)transactionController:(RPNFCTransactionController *)arg1 requestMessageForType:(long long)arg2;
@end

