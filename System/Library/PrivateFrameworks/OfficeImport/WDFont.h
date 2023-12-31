//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject
{
    NSString *mName;	// 8 = 0x8
    NSMutableArray *mAlternateNames;	// 16 = 0x10
    int mFontFamily;	// 24 = 0x18
    int mCharacterSet;	// 28 = 0x1c
    int mPitch;	// 32 = 0x20
}

+ (int)cpFontClassFromWdFontFamily:(int)arg1;	// IMP=0x00100000003f2975
- (void).cxx_destruct;	// IMP=0x00000000003f2e19
- (id)description;	// IMP=0x00000000003f2ddb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f2c4a
- (unsigned long long)hash;	// IMP=0x00000000003f2bf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f2b5a
- (id)initWithName:(id)arg1;	// IMP=0x00000000000bcfce
- (id)init;	// IMP=0x00000000003f2aba
- (void)setPitch:(int)arg1;	// IMP=0x00000000000bd09a
- (int)pitch;	// IMP=0x00000000003f2ab1
- (void)setCharacterSet:(int)arg1;	// IMP=0x00000000000bd0ac
- (int)characterSet;	// IMP=0x00000000003f2aa8
- (void)setFontFamily:(int)arg1;	// IMP=0x00000000000bd0a3
- (int)fontFamily;	// IMP=0x00000000003f2a9f
- (id)secondName;	// IMP=0x00000000003f2a53
- (void)addAlternateName:(id)arg1;	// IMP=0x00000000003f29f7
- (id)alternateNames;	// IMP=0x00000000003f29e9
- (void)setName:(id)arg1;	// IMP=0x00000000003f2991
- (id)name;	// IMP=0x00000000000f5864

@end

