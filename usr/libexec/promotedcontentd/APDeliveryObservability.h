//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol APDeliveryObservabilityTransmitter;

@interface APDeliveryObservability : NSObject
{
    id <APDeliveryObservabilityTransmitter> _transmitter;	// 8 = 0x8
    long long _successCount;	// 16 = 0x10
    long long _backoffIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d5598
@property(nonatomic) long long backoffIndex; // @synthesize backoffIndex=_backoffIndex;
@property(nonatomic) long long successCount; // @synthesize successCount=_successCount;
@property(retain, nonatomic) id <APDeliveryObservabilityTransmitter> transmitter; // @synthesize transmitter=_transmitter;
- (void)recordFailure:(long long)arg1;	// IMP=0x00100000000d54ac
- (void)recordSuccess;	// IMP=0x00100000000d546b
- (id)initWithTransmitter:(id)arg1;	// IMP=0x00100000000d53f8

@end
