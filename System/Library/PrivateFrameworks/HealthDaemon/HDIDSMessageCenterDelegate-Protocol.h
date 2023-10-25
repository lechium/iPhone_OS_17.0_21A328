//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDIDSIncomingRequest, HDIDSMessageCenter, HDIDSOutgoingRequest, HDIDSOutgoingResponse, IDSDevice;

@protocol HDIDSMessageCenterDelegate <NSObject>

@optional
- (void)messageCenter:(HDIDSMessageCenter *)arg1 activeDeviceDidChange:(IDSDevice *)arg2 acknowledgementHandler:(void (^)(void))arg3;
- (void)messageCenter:(HDIDSMessageCenter *)arg1 didResolveIDSIdentifierForResponse:(HDIDSOutgoingResponse *)arg2;
- (void)messageCenter:(HDIDSMessageCenter *)arg1 didResolveIDSIdentifierForRequest:(HDIDSOutgoingRequest *)arg2;
- (void)messageCenter:(HDIDSMessageCenter *)arg1 didReceiveUnknownRequest:(HDIDSIncomingRequest *)arg2;
@end
