//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC16DaemoniOSLibrary21SDXPCHelperImageCache : NSObject
{
}

+ (long long)cacheCount;	// IMP=0x00200000004a0920
+ (struct CGImage *)imageForKey:(id)arg1 contactIDs:(id)arg2;	// IMP=0x00100000004a0160
+ (_Bool)cacheIsEmpty;	// IMP=0x001000000049fc20
+ (void)setImage:(struct CGImage *)arg1 forKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x001000000049fad0
+ (void)evictWithContactIdentifier:(id)arg1;	// IMP=0x001000000049f600
+ (void)purgeAvatars;	// IMP=0x001000000049e630
+ (void)clearCacheWithSync:(_Bool)arg1;	// IMP=0x001000000049e2f0
- (id)init;	// IMP=0x00400000004a09a0

@end
