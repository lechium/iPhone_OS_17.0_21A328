//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC20GameCenterFoundationP33_173B6767D14D11986D9117AA9CB52FFC35InstrumentedTransportClientDelegate : _TtCs12_SwiftObject
{
    MISSING_TYPE *wrapped;	// 16 = 0x10
    MISSING_TYPE *reporter;	// 24 = 0x18
    MISSING_TYPE *transportContext;	// 32 = 0x20
}

- (void)transportDidUpdateWithInfo:(id)arg1;	// IMP=0x000000000011f215
- (void)transportDidReceivePacket:(id)arg1 fromPlayerID:(id)arg2 remoteRecipientID:(id)arg3;	// IMP=0x000000000011f109
- (void)transportDidFailWithError:(id)arg1;	// IMP=0x000000000011f009
- (void)relayDidReceivePushData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011eed3
- (void)connectionDidFailWithError:(id)arg1;	// IMP=0x000000000011ed40
- (void)connectionDidChangeWithState:(int)arg1 playerID:(id)arg2;	// IMP=0x000000000011ecf5

@end
