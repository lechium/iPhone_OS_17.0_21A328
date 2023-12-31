//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBCacheToken.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Key : UIKBCacheToken
{
    CDUnion_bf7716c0 _style;	// 56 = 0x38
    NSString *_cacheDisplayString;	// 64 = 0x40
    NSString *_cacheSecondaryDisplayString;	// 72 = 0x48
    NSString *_annotationString;	// 80 = 0x50
    int _displayTypeHint;	// 88 = 0x58
    int _displayRowHint;	// 92 = 0x5c
    struct CGSize _size;	// 96 = 0x60
    int _state;	// 112 = 0x70
    unsigned long long _clipCorners;	// 120 = 0x78
    unsigned long long _groupNeighbors;	// 128 = 0x80
    _Bool _usesInsets;	// 136 = 0x88
    struct UIEdgeInsets _displayInsets;	// 144 = 0x90
}

+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0060000000b1e2f5
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;	// IMP=0x0060000000b1e27b
- (void).cxx_destruct;	// IMP=0x0000000000b1ea3d
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;	// IMP=0x0000000000b1e964
- (id)string;	// IMP=0x0000000000b1e950
- (id)_stringWithAdditionalValues:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b1e537
- (void)annotateWithInt:(int)arg1;	// IMP=0x0000000000b1e4d9
- (void)annotateWithBool:(_Bool)arg1;	// IMP=0x0000000000b1e4b0
- (void)resetAnnotations;	// IMP=0x0000000000b1e48f
- (void)annotateWithString:(id)arg1;	// IMP=0x0000000000b1e41f
- (_Bool)hasKey;	// IMP=0x0000000000b1e406
- (void)setStyling:(CDStruct_227bb23d)arg1;	// IMP=0x0000000000b1e3f5
- (CDStruct_227bb23d)styling;	// IMP=0x0000000000b1e3e4
- (void)setDisplayHint:(int)arg1;	// IMP=0x0000000000b1e3d4
- (int)displayHint;	// IMP=0x0000000000b1e3c4
- (void)setRowHint:(int)arg1;	// IMP=0x0000000000b1e3b4
- (int)rowHint;	// IMP=0x0000000000b1e3a4
- (void)setSize:(struct CGSize)arg1;	// IMP=0x0000000000b1e38c
- (struct CGSize)size;	// IMP=0x0000000000b1e374
- (id)_initWithKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000b1e079

@end

