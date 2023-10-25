//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, OADBlip;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject
{
    int mIndex;	// 8 = 0x8
    NSString *mName;	// 16 = 0x10
    NSMutableArray *mEffects;	// 24 = 0x18
    OADBlip *mBlip;	// 32 = 0x20
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;	// IMP=0x0010000000304f36
+ (int)blipTypeForImageData:(id)arg1;	// IMP=0x0010000000304c57
+ (int)blipTypeForContentType:(id)arg1;	// IMP=0x00100000001aa331
+ (int)blipTypeForExtension:(id)arg1;	// IMP=0x001000000030468b
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;	// IMP=0x00100000001aaae8
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;	// IMP=0x00100000001aab0d
- (void).cxx_destruct;	// IMP=0x0000000000305054
- (id)description;	// IMP=0x0000000000305016
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001053d3
- (unsigned long long)hash;	// IMP=0x0000000000104855
- (id)effects;	// IMP=0x00000000001b1e2c
- (_Bool)isNull;	// IMP=0x0000000000304ffe
- (void)removeEffectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000304675
- (id)effectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000104761
- (unsigned long long)effectCount;	// IMP=0x000000000010474b
- (void)setEffects:(id)arg1;	// IMP=0x00000000001b1e3a
- (void)addEffect:(id)arg1;	// IMP=0x00000000000ddb77
- (void)setBlip:(id)arg1;	// IMP=0x00000000000de598
- (id)blip;	// IMP=0x00000000000b17ff
- (void)setName:(id)arg1;	// IMP=0x0000000000304664
- (id)name;	// IMP=0x00000000001aabc4
- (void)setIndex:(int)arg1;	// IMP=0x000000000030465b
- (int)index;	// IMP=0x00000000000b180d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021e039
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;	// IMP=0x00000000000afe9c
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;	// IMP=0x00000000000afeb1
- (id)init;	// IMP=0x000000000030464d

@end
