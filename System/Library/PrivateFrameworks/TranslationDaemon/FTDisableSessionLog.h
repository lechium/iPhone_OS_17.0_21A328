//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTDisableSessionLog : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct DisableSessionLog *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006d60c
- (id)flatbuffData;	// IMP=0x000000000006d485
- (Offset_8dc9e736)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000006d46b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d460
- (id)initWithFlatbuffData:(id)arg1 root:(const struct DisableSessionLog *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000006d2b5
- (id)initWithFlatbuffData:(id)arg1 root:(const struct DisableSessionLog *)arg2;	// IMP=0x000000000006d2a0
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000006d286
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000006d26f

@end

