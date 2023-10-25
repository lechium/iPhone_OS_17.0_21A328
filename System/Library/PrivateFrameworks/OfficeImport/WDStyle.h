//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WDCharacterProperties, WDParagraphProperties, WDStyleSheet, WDTableCellProperties, WDTableRowProperties, WDTableStyleOverride;

__attribute__((visibility("hidden")))
@interface WDStyle : NSObject
{
    WDParagraphProperties *mParagraphProperties;	// 8 = 0x8
    WDCharacterProperties *mCharacterProperties;	// 16 = 0x10
    WDTableRowProperties *mTableRowProperties;	// 24 = 0x18
    WDTableCellProperties *mTableCellProperties;	// 32 = 0x20
    WDTableStyleOverride *mTableStyleOverrides[12];	// 40 = 0x28
    _Bool mHidden;	// 136 = 0x88
    NSString *mName;	// 144 = 0x90
    NSString *mId;	// 152 = 0x98
    int mStyleType;	// 160 = 0xa0
    WDStyleSheet *mStyleSheet;	// 168 = 0xa8
    WDStyle *mBaseStyle;	// 176 = 0xb0
    WDStyle *mNextStyle;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000003ff296
@property __weak WDStyle *nextStyle; // @synthesize nextStyle=mNextStyle;
@property(readonly) __weak WDStyleSheet *styleSheet; // @synthesize styleSheet=mStyleSheet;
- (id)description;	// IMP=0x00000000003ff23f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ff077
@property __weak WDStyle *baseStyle; // @synthesize baseStyle=mBaseStyle;
- (id)id;	// IMP=0x000000000019fe96
- (int)type;	// IMP=0x00000000000d1917
- (void)setName:(id)arg1;	// IMP=0x00000000000cf1f1
- (id)name;	// IMP=0x00000000000d1923
- (id)tableStyleOverrideForPart:(int)arg1;	// IMP=0x0000000000164f8b
- (id)tableCellProperties;	// IMP=0x0000000000164bec
- (id)tableRowProperties;	// IMP=0x0000000000164af7
- (id)tableProperties;	// IMP=0x00000000001a003e
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003ff034
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000cf802
- (_Bool)hidden;	// IMP=0x00000000003ff028
- (id)characterProperties;	// IMP=0x00000000000d068c
- (id)paragraphProperties;	// IMP=0x00000000000cf906
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;	// IMP=0x00000000000cef75

@end
