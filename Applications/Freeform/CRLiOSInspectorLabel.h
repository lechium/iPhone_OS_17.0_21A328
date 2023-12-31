//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILabel.h>

@interface CRLiOSInspectorLabel : UILabel
{
    _Bool _containsTrailingMargin;	// 8 = 0x8
    long long _externalNumberOfLines;	// 16 = 0x10
}

@property(nonatomic) long long externalNumberOfLines; // @synthesize externalNumberOfLines=_externalNumberOfLines;
@property(nonatomic) _Bool containsTrailingMargin; // @synthesize containsTrailingMargin=_containsTrailingMargin;
- (_Bool)p_isAccessibilitySize;	// IMP=0x001000000056b984
- (void)setText:(id)arg1;	// IMP=0x001000000056b972
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x001000000056b92a
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000056b8b8
- (void)updateConstraints;	// IMP=0x001000000056b810
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000056b74f

@end

