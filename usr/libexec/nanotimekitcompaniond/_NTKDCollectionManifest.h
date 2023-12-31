//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _NTKDCollectionManifest : NSObject
{
    NSMutableArray *_orderedUUIDs;	// 8 = 0x8
    NSMutableDictionary *_boxedStylesByUUID;	// 16 = 0x10
}

+ (id)emptyManifest;	// IMP=0x00400000000228d9
- (void).cxx_destruct;	// IMP=0x0020000000023737
- (void)_getUUID:(id *)arg1 boxedStyle:(id *)arg2 fromEntry:(id)arg3;	// IMP=0x001000000002355f
- (_Bool)_containsUUID:(id)arg1;	// IMP=0x0010000000023528
- (void)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0010000000023279
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0010000000022f37
- (void)removeAllUUIDs;	// IMP=0x0010000000022efc
- (_Bool)updateOrderWithUUIDs:(id)arg1;	// IMP=0x0010000000022e26
- (_Bool)removeUUID:(id)arg1;	// IMP=0x0010000000022d9a
- (_Bool)addUUID:(id)arg1 withFaceStyle:(long long)arg2;	// IMP=0x0010000000022cb7
- (long long)faceStyleForUUID:(id)arg1;	// IMP=0x0010000000022c62
- (id)orderedUUIDs;	// IMP=0x0010000000022c54
- (id)description;	// IMP=0x001000000002298d
- (id)init;	// IMP=0x00100000000228f3

@end

