//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTMultiUserRecognitionCandidate : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultiUserRecognitionCandidate *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ee74b
- (id)flatbuffData;	// IMP=0x00000000000ee5c4
- (Offset_2de27c14)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ee1b3
- (void)recognition_candidate_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee002
- (unsigned long long)recognition_candidate_count;	// IMP=0x00000000000edf66
- (id)recognition_candidate_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ede6d
@property(readonly, nonatomic) NSArray *recognition_candidate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000edd44
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserRecognitionCandidate *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000edb99
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserRecognitionCandidate *)arg2;	// IMP=0x00000000000edb84
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000edb6a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000edb53

@end
