//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDSleepConfigurationWakePacketTypeWrapper : NSObject
{
    long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002ed7d8
@property(nonatomic) long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ed68f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ed63e
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000002ed624
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ed500
- (id)initWithValue:(long long)arg1;	// IMP=0x00000000002ed4c3
- (id)init;	// IMP=0x00000000002ed487

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

