//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTextEncapsulation, UIColor, _UILabelContent;

__attribute__((visibility("hidden")))
@interface _UILabelSynthesizedContent : NSObject
{
    _UILabelContent *_content;	// 8 = 0x8
    UIColor *_overrideTextColor;	// 16 = 0x10
    long long _semanticContentAttribute;	// 24 = 0x18
    NSTextEncapsulation *_textEncapsulation;	// 32 = 0x20
    struct {
        unsigned int eliminateShadows:1;
        unsigned int overallWritingDirectionFollowsLayoutDirection:1;
        unsigned int disableLinkHypenation:1;
        unsigned int hasExplicitBaselineOffset:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001786210
@property(readonly, nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute=_semanticContentAttribute;
@property(readonly, nonatomic) UIColor *overrideTextColor; // @synthesize overrideTextColor=_overrideTextColor;
@property(readonly, nonatomic) _UILabelContent *content; // @synthesize content=_content;
- (id)description;	// IMP=0x0000000001786052
- (void)_isolateStringWritingDirectionInAttributedString:(id)arg1;	// IMP=0x000000000178598c
- (void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)arg1;	// IMP=0x00000000017857bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001785600
- (unsigned long long)hash;	// IMP=0x000000000178558c
- (id)mutableCopy;	// IMP=0x00000000017854be
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000017854ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000017853de
- (id)_synthesizedAttributedString;	// IMP=0x0000000001784f33
- (id)synthesizedAttributedString;	// IMP=0x0000000001784e37
- (id)synthesizedAttributes;	// IMP=0x0000000001784c39
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) NSTextEncapsulation *textEncapsulation;
@property(readonly, nonatomic) _Bool hasExplicitBaselineOffset;
- (_Bool)reverseNaturalAlignment;	// IMP=0x0000000001784b92
@property(readonly, nonatomic) _Bool disableLinkHypenation;
@property(readonly, nonatomic) _Bool overallWritingDirectionFollowsLayoutDirection;
@property(readonly, nonatomic) _Bool eliminateShadows;

@end
