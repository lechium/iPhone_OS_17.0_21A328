//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSetEndpointerState : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SetEndpointerState *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c0c64
- (id)flatbuffData;	// IMP=0x00000000000c0add
- (Offset_8e83f458)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c0a95
@property(readonly, nonatomic) _Bool enable_server_side_endpoint;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0a59
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetEndpointerState *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c08ae
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetEndpointerState *)arg2;	// IMP=0x00000000000c0899
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c087f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c0868

@end
