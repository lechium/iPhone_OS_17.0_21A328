//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDShading : NSObject
{
    int mStyle;	// 8 = 0x8
    OITSUColor *mForegroundColor;	// 16 = 0x10
    OITSUColor *mBackgroundColor;	// 24 = 0x18
}

+ (id)autoBackgroundColor;	// IMP=0x00100000000be686
+ (id)autoForegroundColor;	// IMP=0x00100000000be601
+ (id)nilShading;	// IMP=0x00100000003feb9e
- (void).cxx_destruct;	// IMP=0x00000000003fee51
- (id)description;	// IMP=0x00000000003fee13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022d037
- (void)setBackground:(id)arg1;	// IMP=0x000000000015b25e
- (id)background;	// IMP=0x0000000000168ed4
- (void)setForeground:(id)arg1;	// IMP=0x000000000015b24d
- (id)foreground;	// IMP=0x0000000000168ec6
- (void)setStyle:(int)arg1;	// IMP=0x000000000015b244
- (int)style;	// IMP=0x000000000015d2c6
- (void)setShading:(id)arg1;	// IMP=0x00000000003fed30
- (unsigned long long)hash;	// IMP=0x00000000003fecf9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fec7d
- (_Bool)isEqualToShading:(id)arg1;	// IMP=0x00000000003febf4
- (id)init;	// IMP=0x00000000000be53b

@end

