//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTEndPointLikelihood : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct EndPointLikelihood *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eaf99
- (id)flatbuffData;	// IMP=0x00000000000eae12
- (Offset_5ff2e0e3)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000eac1f
@property(readonly, nonatomic) int end_point_likelihood;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eaa74
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointLikelihood *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000ea8c9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointLikelihood *)arg2;	// IMP=0x00000000000ea8b4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ea89a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ea883

@end

