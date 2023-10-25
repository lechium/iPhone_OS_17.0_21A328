//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSData, _INPBIntentResponse;

@protocol INIntentResponseExport <NSObject, JSExport>
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore;
- (long long)_intentHandlingStatus;
- (void)_setPayloadResponseMessageData:(NSData *)arg1;
- (NSData *)_payloadResponseMessageData;
- (id)init;
@end
