//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartBatchRecoverRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTBatchRecoverStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchRecoverStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017692d
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x00100000001768ff
- (void).cxx_destruct;	// IMP=0x0000000000176c04
- (id)flatbuffData;	// IMP=0x0000000000176a7d
- (Offset_74b58d8f)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000176988
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000176795
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001765b2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingRequest *)arg2;	// IMP=0x000000000017659d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000176583
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017656c

@end

