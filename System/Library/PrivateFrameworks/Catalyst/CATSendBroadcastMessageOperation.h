//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@protocol CATDictionaryCodable, CATSharingBroadcastPrimitives;

__attribute__((visibility("hidden")))
@interface CATSendBroadcastMessageOperation : CATOperation
{
    id <CATSharingBroadcastPrimitives> mBroadcastPrimitives;	// 8 = 0x8
    id <CATDictionaryCodable> mMessage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000035228
- (void)sendMessage;	// IMP=0x0000000000035146
- (void)main;	// IMP=0x0000000000035080
- (_Bool)isAsynchronous;	// IMP=0x0000000000035078
- (id)initWithBroadcastPrimitive:(id)arg1 message:(id)arg2;	// IMP=0x0000000000034fd6

@end

