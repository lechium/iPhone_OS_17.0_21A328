//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MAPushChannel : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    long long _populationType;	// 16 = 0x10
    NSString *_base64ChannelId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000080f84
@property(readonly, nonatomic) NSString *base64ChannelId; // @synthesize base64ChannelId=_base64ChannelId;
@property(readonly, nonatomic) long long populationType; // @synthesize populationType=_populationType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x0000000000080f22
- (_Bool)isEqualToPushChannelId:(id)arg1;	// IMP=0x0000000000080eac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080e44
- (id)channelIDForPopulationType;	// IMP=0x0000000000080d98
- (id)humanReadableChannelName;	// IMP=0x0000000000080d66
- (id)description;	// IMP=0x0000000000080c8d
- (id)initWithPopulationType:(long long)arg1;	// IMP=0x0000000000080bac
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000080ac6

@end
