//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTFinishAudio_ServerFeatureLatencyDistributionEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ServerFeatureLatencyDistributionEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c2b49
- (id)flatbuffData;	// IMP=0x00000000000c29c2
- (Offset_29b58bb4)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c28d7
@property(readonly, nonatomic) float value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2830
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServerFeatureLatencyDistributionEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c2685
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServerFeatureLatencyDistributionEntry *)arg2;	// IMP=0x00000000000c2670
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c2656
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c263f

@end

