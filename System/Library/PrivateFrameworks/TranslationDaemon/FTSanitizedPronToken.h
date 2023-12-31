//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSanitizedPronToken : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SanitizedPronToken *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d526d
- (id)flatbuffData;	// IMP=0x00000000000d50e6
- (Offset_b0cdab22)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d4faf
@property(readonly, nonatomic) NSString *pron_source;
@property(readonly, nonatomic) NSString *token;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d4ec8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SanitizedPronToken *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d4d1d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SanitizedPronToken *)arg2;	// IMP=0x00000000000d4d08
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d4cee
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d4cd7

@end

