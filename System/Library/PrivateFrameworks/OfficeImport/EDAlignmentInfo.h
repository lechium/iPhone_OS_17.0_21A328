//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : NSObject
{
    int mHorizontalAlignment;	// 8 = 0x8
    int mVerticalAlignment;	// 12 = 0xc
    int mIndent;	// 16 = 0x10
    int mTextRotation;	// 20 = 0x14
    _Bool mTextWrapped;	// 24 = 0x18
    _Bool mHorizontalAlignOverridden;	// 25 = 0x19
    _Bool mVerticalAlignOverridden;	// 26 = 0x1a
    _Bool mIndentOverridden;	// 27 = 0x1b
    _Bool mTextWrappedOveridden;	// 28 = 0x1c
    _Bool mDoNotModify;	// 29 = 0x1d
}

+ (id)alignmentInfo;	// IMP=0x001000000011b771
@property(readonly, copy) NSString *description;
- (void)setDoNotModify:(_Bool)arg1;	// IMP=0x000000000011b91e
- (void)setTextRotation:(int)arg1;	// IMP=0x000000000011b852
- (int)textRotation;	// IMP=0x000000000013567b
- (void)setTextWrapped:(_Bool)arg1;	// IMP=0x000000000011b83f
- (_Bool)isTextWrapped;	// IMP=0x000000000013376f
- (_Bool)isTextWrappedOverridden;	// IMP=0x0000000000135684
- (void)setIndent:(int)arg1;	// IMP=0x000000000011b82c
- (int)indent;	// IMP=0x0000000000133766
- (_Bool)isIndentOverridden;	// IMP=0x00000000001469de
- (void)setVerticalAlignment:(int)arg1;	// IMP=0x000000000011b819
- (int)verticalAlignment;	// IMP=0x0000000000133709
- (_Bool)isVerticalAlignOverridden;	// IMP=0x0000000000133700
- (void)setHorizontalAlignment:(int)arg1;	// IMP=0x000000000011b7f5
- (int)horizontalAlignment;	// IMP=0x000000000013375d
- (_Bool)isHorizontalAlignOverridden;	// IMP=0x0000000000133754
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011cd30
- (_Bool)isEqualToAlignmentInfo:(id)arg1;	// IMP=0x000000000011cdac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039f8df
- (id)init;	// IMP=0x000000000011b78b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

