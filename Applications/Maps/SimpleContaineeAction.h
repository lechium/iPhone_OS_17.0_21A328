//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SimpleContaineeAction : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_footer;	// 16 = 0x10
    NSString *_glyph;	// 24 = 0x18
    unsigned long long _glyphStyle;	// 32 = 0x20
    long long _style;	// 40 = 0x28
    CDUnknownBlockType _action;	// 48 = 0x30
    NSString *_accessibilityIdentifier;	// 56 = 0x38
    NSString *_labelAccessibilityIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000007a91ce
@property(copy, nonatomic) NSString *labelAccessibilityIdentifier; // @synthesize labelAccessibilityIdentifier=_labelAccessibilityIdentifier;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long glyphStyle; // @synthesize glyphStyle=_glyphStyle;
@property(copy, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
