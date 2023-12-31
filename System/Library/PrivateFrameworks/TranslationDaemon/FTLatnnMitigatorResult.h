//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLatnnMitigatorResult : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LatnnMitigatorResult *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ecbd3
- (id)flatbuffData;	// IMP=0x00000000000eca4c
- (Offset_3221f49f)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ec8c8
@property(readonly, nonatomic) float calibration_offset;
@property(readonly, nonatomic) float calibration_scale;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) double threshold;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) _Bool processed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ec766
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LatnnMitigatorResult *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000ec5bb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LatnnMitigatorResult *)arg2;	// IMP=0x00000000000ec5a6
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ec58c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ec575

@end

